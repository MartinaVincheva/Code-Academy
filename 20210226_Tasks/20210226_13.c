/*Задача 13.
Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към
дадена променлива от тип struct tagTMyTime. Напишете следните
функции: връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно. В
решението трябва да се използва динамично заделяне на памет и typedef..*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tagTMyTime tagTMyTime;
typedef struct tagTMyTime *pTime;
struct tagTMyTime
{
    int hours;
    int minutes;
    int seconds;
};

pTime makeTime(int hours, int minutes, int seconds)
{
    pTime retVal = (pTime)malloc(sizeof(tagTMyTime));

    retVal->hours = hours;
    retVal->minutes = minutes;
    retVal->seconds = seconds;
    return retVal;
}

int timeToSeconds(pTime time)
{
    return (time->hours * 3600 + time->minutes * 60 + time->seconds);
}

pTime secondsToTime(unsigned long seconds)
{
    int h, m, s = seconds;

    h = s / 3600;
    s %= 3600;
    m = s / 60;
    s %= 60;
    return (makeTime(h, m, s));
}

void addTime(pTime time, int hours, int minutes, int seconds)
{
    int temp;

    temp = time->seconds + seconds;
    time->seconds = temp % 60;
    time->minutes += temp / 60;

    temp = time->minutes + minutes;
    time->minutes = temp % 60;
    time->hours += temp / 60;

    time->hours += hours;
}

pTime timeDiff(pTime t2, pTime t1)
{
    return (secondsToTime(timeToSeconds(t2) - timeToSeconds(t1)));
}

pTime sumTime(pTime t1, pTime t2)
{
    return (secondsToTime(timeToSeconds(t2) + timeToSeconds(t1)));
}

void printTime(pTime time)
{
    printf("%02d:%02d:%02d\n", time->hours, time->minutes, time->seconds);
}

int main(void)
{
    pTime t1 = makeTime(10, 10, 10);
    printf("Start Time :");
    printTime(t1);

    pTime t2 = makeTime(20, 20, 20);
    printf("Second time :");
    printTime(t2);
    printf("Second time in seconds: %ld\n", timeToSeconds(t2));

    pTime t3 = sumTime(t1, t2);
    printf("Third time is equal to the sum of time 1 + time 2 = ");
    printTime(t3);

    pTime t4 = timeDiff(t2, t1);
    printf("Fourth time is equal to the result of time 2 - time 1 = ");
    printTime(t4);

    free(t1);
    free(t2);
    free(t3);
    free(t4);
    return 0;
}
