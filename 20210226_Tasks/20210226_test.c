/*13ta zad Nikolay*/
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int hours;
    int minutes;
    int seconds;
} tagMyTime;

void fixTime(tagMyTime *var);
void addSeconds(tagMyTime *var, int seconds);
void addMinutes(tagMyTime *var, int minutes);
void addHours(tagMyTime *vat, int hours);
int Getseconds(tagMyTime *var);
tagMyTime *secondsInToTime(int seconds);
tagMyTime *addTwoTimers(tagMyTime *var1, tagMyTime *var2);
tagMyTime *SubstractTwoTimers(tagMyTime *var1, tagMyTime *var2);

int main()
{
    tagMyTime *clock1 = (tagMyTime *)malloc(sizeof(tagMyTime));

    clock1->hours = 12;
    clock1->minutes = 30;
    clock1->seconds = 44;

    addSeconds(clock1, 50);
    printf("%.2d:%.2d:%.2d\n", clock1->hours, clock1->minutes, clock1->seconds);
    addMinutes(clock1, 30);
    printf("%.2d:%.2d:%.2d\n", clock1->hours, clock1->minutes, clock1->seconds);
    addHours(clock1, 12);
    printf("%.2d:%.2d:%.2d\n", clock1->hours, clock1->minutes, clock1->seconds);
    clock1->hours = 2;
    clock1->minutes = 1;
    clock1->seconds = 0;

    printf("%d\n", Getseconds(clock1));
    clock1 = secondsInToTime(8274);
    printf("%.2d:%.2d:%.2d\n", clock1->hours, clock1->minutes, clock1->seconds);

    tagMyTime *clock2 = (tagMyTime *)malloc(sizeof(tagMyTime));
    tagMyTime *clock3 = (tagMyTime *)malloc(sizeof(tagMyTime));
    clock1->hours = 12;
    clock1->minutes = 30;
    clock1->seconds = 44;
    clock2->hours = 13;
    clock2->minutes = 21;
    clock2->seconds = 30;
    clock3 = addTwoTimers(clock1, clock2);
    printf("%.2d:%.2d:%.2d\n", clock3->hours, clock3->minutes, clock3->seconds);

    clock1 = SubstractTwoTimers(clock3, clock2);
    printf("%.2d:%.2d:%.2d\n", clock1->hours, clock1->minutes, clock1->seconds);
    free(clock1);
    free(clock2);
    free(clock3);
    return 0;
}

void fixTime(tagMyTime *var)
{
    if (var->seconds >= 60)
    {
        var->minutes++;
        var->seconds = var->seconds - 60;
    }
    if (var->minutes >= 60)
    {
        var->hours++;
        var->minutes = var->minutes - 60;
    }
    if (var->hours >= 24)
    {
        var->hours = var->hours - 24;
    }
    if (var->seconds < 0)
    {
        var->minutes--;
        var->seconds = var->seconds + 60;
    }
    if (var->minutes < 0)
    {
        var->hours--;
        var->minutes = var->minutes + 60;
    }
    if (var->hours < 0)
    {
        var->hours += 24;
    }
}

void addSeconds(tagMyTime *var, int seconds)
{
    var->seconds += seconds;
    fixTime(var);
}

void addMinutes(tagMyTime *var, int minutes)
{
    var->minutes += minutes;
    fixTime(var);
}
void addHours(tagMyTime *var, int hours)
{
    var->hours += hours;
    fixTime(var);
}

int Getseconds(tagMyTime *var)
{
    int sumSeconds;
    sumSeconds += var->seconds;
    sumSeconds += var->minutes * 60;
    sumSeconds += var->hours * 3600;
    return sumSeconds;
}

tagMyTime *secondsInToTime(int seconds)
{
    tagMyTime *clock = (tagMyTime *)malloc(sizeof(tagMyTime));
    int h, m, s;
    h = seconds / 3600;
    m = (seconds - (3600 * h)) / 60;
    s = (seconds - (3600 * h) - (m * 60));
    clock->hours = h;
    clock->minutes = m;
    clock->seconds = s;
    return clock;
}

tagMyTime *addTwoTimers(tagMyTime *var1, tagMyTime *var2)
{
    tagMyTime *newClock;
    newClock = (tagMyTime *)malloc(sizeof(tagMyTime));
    newClock->seconds = var1->seconds + var2->seconds;
    fixTime(newClock);
    newClock->minutes = var1->minutes + var2->minutes;
    fixTime(newClock);
    newClock->hours = var1->hours + var2->hours;
    fixTime(newClock);
    return newClock;
}

tagMyTime *SubstractTwoTimers(tagMyTime *var1, tagMyTime *var2)
{
    tagMyTime *newClock;
    newClock = (tagMyTime *)malloc(sizeof(tagMyTime));
    newClock->seconds = var1->seconds - var2->seconds;
    fixTime(newClock);
    newClock->minutes = var1->minutes - var2->minutes;
    fixTime(newClock);
    newClock->hours = var1->hours - var2->hours;
    fixTime(newClock);
    return newClock;
}
