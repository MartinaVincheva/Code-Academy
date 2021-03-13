/*Задача 14 Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват
масиви с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците..*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNTPARTICIPANTS 3

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
    ParticipantsData[0].age = 15;
    ParticipantsData[0].firstName = "Asen";
    ParticipantsData[0].lastName = "Dimitrov";
    ParticipantsData[0].number = 67;
    ParticipantsData[1].age = 17;
    ParticipantsData[1].firstName = "Nedyalko";
    ParticipantsData[1].lastName = "Zhelyazkov";
    ParticipantsData[1].number = 123;
    ParticipantsData[2].age = 89;
    ParticipantsData[2].firstName = "Gina";
    ParticipantsData[2].lastName = "Stoycheva";
    ParticipantsData[2].number = 1;
}

void printParticData()
{
    printf("%d\n", COUNTPARTICIPANTS);
    for (int i = 0; i < COUNTPARTICIPANTS; i++)
    {
        ParticipantData *p = &ParticipantsData[i];

        printf("%d %s %s %d\n", p->number, p->firstName, p->lastName, p->age);
    }
}

int main()
{
    fill_ParticipantsInfo();
    printParticData();
    return 0;
}
