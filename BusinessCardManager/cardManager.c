#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATA_FILE_NAME "c:\\temp\\cards.dta"
#define CSV_FILE_NAME "c:\\temp\\cards.csv"
#define MAX_INPUT_STR 255
const char *CSV_FORMAT_OUT = "%s,%s,%s,%d,%d,%s,%s,%s\n";

typedef struct business_card
{
    char *firstName;
    char *middleName;
    char *lastName;
    int homeTelNumber;
    int businessTelNumber;
    char *email;
    char *company;
    char *companyAddress;
} business_card;

static void business_card_free(void *data)
{
    business_card *card = (business_card *)data;
    free(card->firstName);
    free(card->middleName);
    free(card->lastName);
    free(card->company);
    free(card->companyAddress);
    free(card->email);
    free(card);
}

static void printCard(business_card *data)
{
    printf("%s, %s, %s, %d, %d, %s, %s, %s\n", data->firstName, data->middleName, data->lastName, data->homeTelNumber, data->businessTelNumber, data->email, data->company, data->companyAddress);
}

static void printListFrom(node *startNode)
{
    node *ptr = startNode;

    if (startNode == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    while (ptr != NULL)
    {
        printCard((business_card *)ptr->data);
        ptr = getNextNode(ptr);
    }
    printf("\n");
}

static char *readString(char *textToPring)
{
    char temp[MAX_INPUT_STR], *ptmp;

    printf("%s", textToPring);
    gets(temp);
    ptmp = (char *)malloc(strlen(temp) + 1);
    strcpy(ptmp, temp);
    return (ptmp);
}

static int read_int(char *str)
{
    char temp[20];

    printf("%s", str);
    gets(temp);
    return (atoi(temp));
}

node *importData(node *start_node)
{
    business_card *card = (business_card *)malloc(sizeof(business_card));

    printf("\n==============================================================\n");
    printf("Please enter following information which is needed for Business Card!\n");
    card->firstName = readString("Enter First Name:");
    card->middleName = readString("Enter Middle Name :");
    card->lastName = readString("Enter Last Name :");
    card->email = readString("Enter e-mail :");
    card->company = readString("Enter Company :");
    card->companyAddress = readString("Enter Company address :");
    card->homeTelNumber = read_int("Enter Home telephone number :");
    card->businessTelNumber = read_int("Enter Business telephone number :");
    printf("\n==============================================================\n");
    return (addNodeToStart(start_node, card));
}

static void csvHeader(FILE *file)
{
    fprintf(file, "%s,%s,%s,%s,%s,%s,%s,%s\n", "First Name", "Middle Name", "Last Name", "Home Telephone Number", "Business Telephone Number", "e-m@il", "Company Name", "Company Address");
}

static void noHeader(FILE *file)
{
}

static void saveCardsData(node *start_node, char *fileName, void (*header)(FILE *out))
{
    FILE *myCardsData = NULL;

    myCardsData = fopen(fileName, "w");
    if (NULL == myCardsData)
    {
        printf("Unable to save card data!\n");
        return;
    }
    header(myCardsData);
    while (NULL != start_node)
    {
        business_card *data = (business_card *)start_node->data;
        fprintf(myCardsData, CSV_FORMAT_OUT, data->firstName, data->middleName, data->lastName, data->homeTelNumber, data->businessTelNumber, data->email, data->company, data->companyAddress);
        start_node = getNextNode(start_node);
    }
    fclose(myCardsData);
}

static void cardFillString(char **item, char *string)
{
    *item = malloc(strlen(string) + 1);
    strcpy(*item, string);
}

node *loadCardsData(node *start_node, char *fileName, int skip_lines)
{
    FILE *myCardsData = NULL;
    char line[MAX_INPUT_STR], *p = line;

    myCardsData = fopen(fileName, "r");
    if (NULL == myCardsData)
    {
        return (NULL);
    }
    for (int readLen = 1; readLen > 0;)
    {
        char c;

        readLen = fread(&c, 1, 1, myCardsData);
        if (readLen < 1)
        {
            break;
        }
        if (c != '\n')
        {
            *p++ = c;
        }
        else
        {
            if (skip_lines)
            {
                p = line;
                skip_lines--;
                continue;
            }
            business_card *card = (business_card *)malloc(sizeof(business_card));
            *p = '\0';

            cardFillString(&card->firstName, strtok(line, ","));  /* First name */
            cardFillString(&card->middleName, strtok(NULL, ",")); /* Mid name */
            cardFillString(&card->lastName, strtok(NULL, ","));   /* Last name */

            card->homeTelNumber = atoi(strtok(NULL, ","));     /* Home phone */
            card->businessTelNumber = atoi(strtok(NULL, ",")); /* Office phone */

            cardFillString(&card->email, strtok(NULL, ","));          /* Email */
            cardFillString(&card->company, strtok(NULL, ","));        /* Company */
            cardFillString(&card->companyAddress, strtok(NULL, ",")); /* Company address*/

            start_node = addNodeToStart(start_node, card);
            p = line;
        }
    }
    fclose(myCardsData);
    return (start_node);
}

static int compareFirstName(void *data, char *string)
{
    return (strcmp(((business_card *)data)->firstName, string));
}

static int compareLastName(void *data, char *string)
{
    return (strcmp(((business_card *)data)->lastName, string));
}

static int compareCompanyName(void *data, char *string)
{
    return (strcmp(((business_card *)data)->company, string));
}

static void printSearchResult(node *n)
{
    printf("\n==============================================================\n");
    printf("Found card:\n");
    printCard((business_card *)n->data);
    printf("==============================================================\n");
}

static void search3Types(node *start_node)
{
    int choice;
    char name[20];
    char temp[3];
    node *current;

    printf("\n==============================================================\n");
    printf("Please chose how you want to serch for a bussiness card:\n");
    printf("1.Search by First name.\n");
    printf("2.Search by Last name.\n");
    printf("3.Search by Company.\n");
    gets(temp);
    choice = atoi(temp);

    switch (choice)
    {
    case 1:
        printf("Please enter First name to search:");
        gets(name);
        current = searchListNode(start_node, name, &compareFirstName);
        if (NULL != current)
        {
            printSearchResult(current);
        }
        else
        {
            printf("First name was not found!\n");
        }
        break;
    case 2:
        printf("Please enter Last name to search:");
        gets(name);
        current = searchListNode(start_node, name, &compareLastName);
        if (NULL != current)
        {
            printSearchResult(current);
        }
        else
        {
            printf("Last name not found!\n");
        }
        break;
    case 3:
        printf("Please enter Company name to search:");
        gets(name);
        current = searchListNode(start_node, name, &compareCompanyName);
        if (NULL != current)
        {
            printSearchResult(current);
        }
        else
        {
            printf("Company not found!\n");
        }
        break;
    case '\r':
    case '\n':
        break;
    default:
        printf("Invalid input!\nPlease try again!\n");
        break;
    }
}

static int compareNodesByFirstName(void *data1, void *data2)
{
    return (strcmp(((business_card *)data1)->firstName, ((business_card *)data2)->firstName));
}

static int compareNodesByLastName(void *data1, void *data2)
{
    return (strcmp(((business_card *)data1)->lastName, ((business_card *)data2)->lastName));
}

static int compareNodesByCompanyName(void *data1, void *data2)
{
    return (strcmp(((business_card *)data1)->company, ((business_card *)data2)->company));
}

static void sortCards(node *start_node)
{
    int choice;
    char temp[3];

    printf("\n==============================================================\n");
    printf("Please chose how you want to sort the business cards:\n");
    printf("1.By First name.\n");
    printf("2.By Last name.\n");
    printf("3.By Company.\n");
    gets(temp);
    choice = atoi(temp);

    switch (choice)
    {
    case 1:
        sortList(start_node, &compareNodesByFirstName);
        printf("\n==============================================================\n");
        printf("Sorted list by First Name:\n");
        printListFrom(start_node);
        break;
    case 2:
        sortList(start_node, &compareNodesByLastName);
        printf("\n==============================================================\n");
        printf("Sorted list by Last Name:\n");
        printListFrom(start_node);
        break;
    case 3:
        sortList(start_node, &compareNodesByCompanyName);
        printf("\n==============================================================\n");
        printf("Sorted list by Company:\n");
        printListFrom(start_node);
        break;
    default:
        printf("Invalid input!\nPlease try again!\n");
        break;
    }
}

void cardManager(void)
{
    int choice = 0;
    char temps[3] = {0};
    node *myData = NULL;

    myData = loadCardsData(myData, DATA_FILE_NAME, 0);
    printf("\n==============================================================\n");
    printf("Welcome to Business card program!\n");
    printf("\n==============================================================\n");
    do
    {
        fflush(stdin);
        printf("\n==============================================================\n");
        printf("Please, chose from the menu what you want to do!\n");
        printf("1.Add new business card(s).\n");
        printf("2.Search for a business card.\n");
        printf("3.Sort the available business cards.\n");
        printf("4.Export CSV file.\n");
        printf("5.Import CSV file.\n");
        printf("6.Clear card database.\n");
        printf("0.EXIT\n");
        gets(temps);
        choice = atoi(temps);

        switch (choice)
        {
        case 0:
        {
            printf("\n==============================================================\n");
            printf("Thank you for using the program!\nSee you soon!\n");
            printf("\n==============================================================\n");
            saveCardsData(myData, DATA_FILE_NAME, &noHeader);
            dellList(myData, &business_card_free);
            myData = NULL;
            break;
        }
        case 1:
        {
            do
            {
                myData = importData(myData);
                printf(
                    "Do you want to import and another Business card <Y/N>?\n");
                gets(temps);
                if (('y' != temps[0]) && ('Y' != temps[0]))
                {
                    break;
                }
            } while (1);
            break;
        }
        case 2:
            search3Types(myData);
            break;
        case 3:
            sortCards(myData);
            break;
        case 4:
            saveCardsData(myData, CSV_FILE_NAME, &csvHeader);
            break;
        case 5:
            myData = loadCardsData(myData, CSV_FILE_NAME, 1);
            printListFrom(myData);
            break;
        case 6:
            dellList(myData, &business_card_free);
            myData = NULL;
            break;
        case '\r':
        case '\n':
            break;
        default:
            printf("Invalid input!\nPlease try again!\n");
            break;
        }
    } while (choice != 0);
}
