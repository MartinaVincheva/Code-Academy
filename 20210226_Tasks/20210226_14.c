/*Задача 14 Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват
масиви с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците..*/
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
    for (int i = 0; i < COUNTPARTICIPANTS; i++)
    {
        ParticipantData *p = &ParticipantsData[i];

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
