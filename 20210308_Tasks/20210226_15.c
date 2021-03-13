/*Задача 15 Използвайки предишното упражнение, изведете
участниците подредени по азбучен ред.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNTPARTICIPANTS 10
int runners_count = 0;

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
    for (int i = 0; i < runners_count; i++)
    {
        ParticipantData *p_partic = &ParticipantsData[i];
        int number, age;
        char firstName[15], lastName[15];

        scanf("%d %s %s %d\n", &number, firstName, lastName, &age);
        printf("%d %s %s %d\n", number, firstName, lastName, age);
        p_partic->number = number;
        p_partic->firstName = malloc(strlen(firstName) + 1);
        strcpy(p_partic->firstName, firstName);
        p_partic->lastName = malloc(strlen(lastName) + 1);
        strcpy(p_partic->lastName, lastName);
        p_partic->age = age;
    }
}

void printParticData()
{
    int tempInt;
    char *tempCharPtr;
    for (int i = 0; i < runners_count; i++)
    {
        ParticipantData *p = &ParticipantsData[i];
        for (int j = i + 1; j < runners_count; j++)
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
    printf("\n");
}

int main()
{
    char temp[15];

    fflush(stdin);
    scanf("%d", &runners_count);
    printf("%d\n", runners_count);
    fill_ParticipantsInfo();
    printParticData();
    for (int i = 0; i < runners_count; i++)
    {
        free(ParticipantsData[i].firstName);
        free(ParticipantsData[i].lastName);
    }
    return 0;
}
