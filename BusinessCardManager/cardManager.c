#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATA_FILE_NAME "c:\\temp\\cards.dta"
#define MAX_INPUT_STR 255
const char *CSV_FORMAT_OUT = "%s,%s,%s,%d,%d,%s,%s,%s\n";

business_card *myData = NULL;

static void printCard(business_card *current)
{
    printf("%s, %s, %s, %d, %d, %s, %s, %s\n", current->firstName, current->middleName, current->lastName, current->homeTelNumber, current->bussinessTelNumber, current->email, current->company, current->companyAddress);
}

static void printListFrom(business_card *startNode)
{
    business_card *ptr = startNode;

    if (startNode == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    while (ptr != NULL)
    {
        printCard(ptr);
        ptr = ptr->next;
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

static void importData(void)
{
    business_card *card = (business_card *)malloc(sizeof(business_card));

    printf("Please enter following information which is needed for Business Card!\n");
    card->firstName = readString("Enter First Name:");
    card->middleName = readString("Enter Middle Name :");
    card->lastName = readString("Enter Last Name :");
    card->email = readString("Enter e-mail :");
    card->company = readString("Enter Company :");
    card->companyAddress = readString("Enter Company address :");
    card->homeTelNumber = read_int("Enter Home telephone number :");
    card->bussinessTelNumber = read_int("Enter Business telephone number :");
    myData = addNodeToStart(myData, card);
}

static void saveCardsData(business_card *start)
{
    FILE *myCardsData = NULL;

    myCardsData = fopen(DATA_FILE_NAME, "w");
    if (NULL == myCardsData)
    {
        printf("Unable to save card data!\n");
        return;
    }
    while (NULL != start)
    {
        fprintf(myCardsData, CSV_FORMAT_OUT, start->firstName, start->middleName, start->lastName, start->homeTelNumber, start->bussinessTelNumber, start->email, start->company, start->companyAddress);
        start = start->next;
    }
    fclose(myCardsData);
}

static void cardFillString(char **item, char *string)
{
    *item = malloc(strlen(string) + 1);
    strcpy(*item, string);
}

static void loadCardsData(business_card *start)
{
    FILE *myCardsData = NULL;
    char line[MAX_INPUT_STR], *p = line;

    myCardsData = fopen(DATA_FILE_NAME, "r");
    if (NULL == myCardsData)
    {
        return;
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
            business_card *card = (business_card *)malloc(sizeof(business_card));
            *p = '\0';

            cardFillString(&card->firstName, strtok(line, ","));  /* First name */
            cardFillString(&card->middleName, strtok(NULL, ",")); /* Mid name */
            cardFillString(&card->lastName, strtok(NULL, ","));   /* Last name */

            card->homeTelNumber = atoi(strtok(NULL, ","));      /* Home phone */
            card->bussinessTelNumber = atoi(strtok(NULL, ",")); /* Office phone */

            cardFillString(&card->email, strtok(NULL, ","));          /* Email */
            cardFillString(&card->company, strtok(NULL, ","));        /* Company */
            cardFillString(&card->companyAddress, strtok(NULL, ",")); /* Company address*/

            myData = addNodeToStart(myData, card);
            p = line;
        }
    }
    fclose(myCardsData);
}

static int compareFirstName(business_card *node, char *string)
{
    return (strcmp(node->firstName, string));
}

static int compareLastName(business_card *node, char *string)
{
    return (strcmp(node->lastName, string));
}

static int compareCompanyName(business_card *node, char *string)
{
    return (strcmp(node->company, string));
}

static business_card *search(business_card *start, char *string, int (*compare)(business_card *node, char *string))
{
    business_card *p = start;

    do
    {
        if (0 == compare(p, string))
        {
            return p;
        }
        else
        {
            p = p->next;
        }
    } while (p != NULL);
    return NULL;
}

static void search3Types(business_card *start)
{
    int choice;
    char name[20];
    char temp[3];
    business_card *current;

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
        scanf("%s", name);
        current = search(start, name, &compareFirstName);
        if (NULL != current)
        {
            printCard(current);
        }
        else
        {
            printf("First name was not found!\n");
        }
        break;
    case 2:
        printf("Please enter Last name to search:");
        scanf("%s", name);
        current = search(start, name, &compareLastName);
        if (NULL != current)
        {
            printCard(current);
        }
        else
        {
            printf("Last name not found!\n");
        }
        break;
    case 3:
        printf("Please enter Company name to search:");
        scanf("%s", name);
        current = search(start, name, &compareCompanyName);
        if (NULL != current)
        {
            printCard(current);
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

static int compareNodesByFirstName(business_card *node1, business_card *node2)
{
    return (strcmp(node1->firstName, node2->firstName));
}

static int compareNodesByLastName(business_card *node1, business_card *node2)
{
    return (strcmp(node1->lastName, node2->lastName));
}

static int compareNodesByCompanyName(business_card *node1, business_card *node2)
{
    return (strcmp(node1->company, node2->company));
}

static void swap(business_card **node1, business_card *node2, int (*compare)(business_card *node1, business_card *node2))
{
}

static void sort(business_card **start, int (*compare)(business_card *node1, business_card *node2))
{
    int swapping = 0;
    business_card *prev = NULL;

    if (start == NULL)
    {
        return;
    }
    business_card *current = start;
    if (current == NULL)
    {
        return;
    }
    business_card *next = current->next;
    do
    {
        // swapping = 0;
        // ptr1 = start;
        // while (ptr1->next != rtp1)
        // {
        //     if (compare(ptr1, ptr1->next->firstName) > 0)
        //     {
        //         swap(ptr1, ptr1->next);
        //         swapping = 1;
        //     }
        //     ptr1 = ptr1->next;
        // }
        // rtp1 = ptr1;
    } while (swapping);
}

static void print3Types(business_card *start)
{
    int choice;
    char temp[3];

    printf("Please chose how you want to sort the business cards:\n");
    printf("1.By First name.\n");
    printf("2.By Last name.\n");
    printf("3.By Company.\n");
    gets(temp);
    choice = atoi(temp);

    switch (choice)
    {
    case 1:
        sort(start, &compareNodesByFirstName);
        printListFrom(myData);
        break;
    case 2:
        sort(start, &compareNodesByLastName);
        printListFrom(myData);
        break;
    case 3:
        sort(start, &compareNodesByCompanyName);
        printListFrom(myData);
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

    loadCardsData(myData);
    printf("Welcome to Business card program!\n");
    do
    {
        fflush(stdin);
        printf("Please, chose from the menu what you want to do!\n");
        printf("1.Add new Business cards.\n");
        printf("2.Search for a Business card.\n");
        printf("3.Sort the available Business cards.\n");
        printf("4.Open CSV file with Business cards.\n");
        printf("5.EXIT\n");
        gets(temps);
        choice = atoi(temps);

        printf(">%02X<\n", choice);
        switch (choice)
        {
        case 1:
        {
            do
            {
                importData();
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
            print3Types(myData);
            break;
        case 4:
            // saveAsFile();
            break;
        case 5:
            printf("Thank you for using the program!\nSee you soon!\n");
            saveCardsData(myData);
            dellList(myData);
            break;
        case '\r':
        case '\n':
            break;
        default:
            printf("Invalid input!\nPlease try again!\n");
            break;
        }
    } while (choice != 5);
}
