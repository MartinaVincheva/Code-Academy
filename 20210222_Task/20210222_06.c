/*Задача 6. Опишете времето в структура: часове:минути:секунди като структура tagTMyTime.
Използвайки тази структура, дефинирайте следните функции: добавяне на секунди,
добавяне на минути. Добавяне на часове към дадена променлива от тип struct
tagTMyTime. Напишете следните функции: връщане на броя секунди за дадена
променлива от въведения тип и обратна функция от секундите да се генерира
променлива tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно. /*/
#include <stdio.h>
#include <string.h>

struct tagMyTime
{
    int hours;
    int minutes;
    int seconds;
} t1, t2, t3, t4;

struct tagMyTime makeTime(int hours, int minutes, int seconds)
{
    minutes += seconds / 60;
    hours += minutes / 60;
    minutes = minutes % 60;
    seconds = seconds % 60;
    struct tagMyTime time = {hours, minutes, seconds};
    return time;
}

void addTime(struct tagMyTime *time, int hours, int minutes, int seconds)
{
    hours += time->hours;
    minutes += time->minutes;
    seconds += time->seconds;
    minutes += seconds / 60;
    hours += minutes / 60;
    minutes = minutes % 60;
    seconds = seconds % 60;
    time->hours = hours;
    time->minutes = minutes;
    time->seconds = seconds;
}
struct tagMyTime minTime(struct tagMyTime *t1, struct tagMyTime *t2)
{
    int hours = t1->hours;
    int minutes = t1->minutes;
    int seconds = t1->seconds;
    hours -= t2->hours;
    minutes -= t2->minutes;
    seconds -= t2->seconds;
    if (seconds < 0)
    {
        minutes--;
        seconds += 60;
    }
    if (minutes < 0)
    {
        hours--;
        minutes += 60;
    }
    if (hours < 0)
    {
        printf("Inavalid hours");
        struct tagMyTime time;
        return time;
    }
    return makeTime(hours, minutes, seconds);
}

struct tagMyTime sumTime(struct tagMyTime *t1, struct tagMyTime *t2)
{
    int hours = t1->hours;
    int minutes = t1->minutes;
    int seconds = t1->seconds;
    hours += t2->hours;
    minutes += t2->minutes;
    seconds += t2->seconds;
    minutes += seconds / 60;
    hours += minutes / 60;
    minutes = minutes % 60;
    seconds = seconds % 60;
    return makeTime(hours, minutes, seconds);
}

void printTime(struct tagMyTime *time)
{
    printf("%d:%d:%d\n", time->hours, time->minutes, time->seconds);
}

int main(void)
{
    t1 = makeTime(10, 10, 10);
    printf("Start Time :");
    printTime(&t1);

    t2 = makeTime(20, 20, 20);
    t3 = sumTime(&t1, &t2);
    printf("Time 3 sum time 1 + time 2:");
    printTime(&t3);
    printf("Time 4:");
    printTime(&t4);
    return 0;
}
