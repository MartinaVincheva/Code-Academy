/* Задача 12. Използвайки предишното упражнение, изведете участниците подредени по азбучен ред. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PARTICIPANTS 1000
int participantNumbers[MAX_PARTICIPANTS], count = 0, allParticipants;
char *participantFirstNames[MAX_PARTICIPANTS], firstName[100];
char *participantLastNames[MAX_PARTICIPANTS], lastName[100];
int participantAges[MAX_PARTICIPANTS];

void sortParticipants(int count)
{
    int tempPartNumber;
    char *tempPartFirstName;
    char *tempPartLastName;
    int tempPartAge;

    for (int i = 0; i < allParticipants - 1; i++)
    {
        for (int j = i; j < allParticipants; j++)
        {
        }
    }
}

int main()
{
    printf("Please enter number of participants:");
    scanf("%d", &allParticipants);
    for (count = 0; count < allParticipants; count++)
    {
        printf("Please enter participant number: ");
        scanf("%d", &participantNumbers[count]);
        printf("Please enter participant first name: ");
        scanf("%s", firstName);
        printf("Please enter participant last name: ");
        scanf("%s", lastName);
        printf("Please enter participant age: ");
        scanf("%d", &participantAges[count]);
        participantFirstNames[count] = malloc(strlen(firstName) + 1);
        strcpy(participantFirstNames[count], firstName);
        participantLastNames[count] = malloc(strlen(lastName) + 1);
        strcpy(participantLastNames[count], lastName);
    }
    sortParticipants(allParticipants);
    for (count = 0; count < allParticipants; count++)
    {
        printf("Participant %d, %s %s, age %d, number %d\n", count, participantFirstNames[count], participantLastNames[count], participantAges[count], participantNumbers[count]);
        free(participantFirstNames[count]);
        free(participantLastNames[count]);
    }
    return 0;
}