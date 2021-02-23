/*Задача 4. Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.
struct name newvariable = {21,2,2020};
newvariable.memeber = value;
struct name newvariable = {.memeber3=2020,.member1=21, .memeber2=2};*/
#include <stdio.h>
#include <string.h>

struct date
{
    char month[12];
    char day;
    unsigned year;
} contractdate1; /*1st way to declare 'contactdate'*/

int main()
{
    struct date contractdate2 = {"May", 24, 2019}; /*2nd way to declare 'contactdate'*/
    struct date contractdate3 = {.year = 2020, .month = "July", .day = 14};

    contractdate1.day = 10;
    strcpy(contractdate1.month, "March");
    contractdate1.year = 2021;

    printf("Contract date 1: %d.%s.%d\n", contractdate1.day, contractdate1.month, contractdate1.year);
    printf("Contract date 2: %d.%s.%d\n", contractdate2.day, contractdate2.month, contractdate2.year);
    printf("Contract date 3: %d.%s.%d\n", contractdate3.day, contractdate3.month, contractdate3.year);
    return 0;
}