/*Задача 15 Използвайки предишното упражнение, изведете
участниците подредени по азбучен ред.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNTPARTICIPANTS 10

typedef struct
{
    unsigned number;
    char *firstName;
    char *lastName;
    unsigned age;
} ParticipantData;

ParticipantData ParticipantsData[COUNTPARTICIPANTS];

void fill_ParticipantsInfo(void)
{
    int i;
    char temp[30];

    for (i = 0; i < COUNTPARTICIPANTS; i++)
    {
        ParticipantData *p_partic = &ParticipantsData[i];

        printf("Please enter information for the participant %d:\n", i + 1);
        printf("Enter participant number:");
        gets(temp);
        p_partic->number = atoi(temp);
        printf("Enter First Name of the participant:");
        gets(temp);
        p_partic->firstName = malloc(strlen(temp) + 1);
        strcpy(p_partic->firstName, temp);
        printf("Enter Last Name of the participant:");
        gets(temp);
        p_partic->lastName = malloc(strlen(temp) + 1);
        strcpy(p_partic->lastName, temp);
        printf("Enter age of the participant:");
        gets(temp);
        p_partic->age = atoi(temp);
    }
}

void printParticData()
{
    int tempInt;
    char *tempCharPtr;
    for (int i = 0; i < COUNTPARTICIPANTS; i++)
    {
        ParticipantData *p = &ParticipantsData[i];
        for (int j = i + 1; j < COUNTPARTICIPANTS; j++)
        {
            ParticipantData *q = &ParticipantsData[j];
            if (strcmp(p->firstName, q->firstName) > 0)
            {
                tempCharPtr = q->firstName;
                q->firstName = p->firstName;
                p->firstName = tempCharPtr;
                tempCharPtr = q->lastName;
                q->lastName = p->lastName;
                p->lastName = tempCharPtr;
                tempInt = q->number;
                q->number = p->number;
                p->number = tempInt;
                tempInt = q->age;
                q->age = p->age;
                p->age = tempInt;
            }
        }

        printf("|%d | %s | %s | %d |\n", p->number, p->firstName, p->lastName, p->age);
    }
}

int main()
{
    fill_ParticipantsInfo();
    printParticData();
    for (int i = 0; i < COUNTPARTICIPANTS; i++)
    {
        free(ParticipantsData[i].firstName);
        free(ParticipantsData[i].lastName);
    }
    return 0;
}
