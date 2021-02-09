/* 7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината.*/
#include <stdio.h>

char days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int isLeapYear(unsigned int year) {
    if (year % 400 == 0) {
       return 1;
    } else if (year % 100 == 0) {
       return 0;
    } else if (year % 4 == 0) {
       return 1;
    } 
    return 0;
}

unsigned int days2date(char day, char month, short year) {
    unsigned int i, res = day;

    for( i = 0; i < month - 1; i++)
        res += days[i];
    if (isLeapYear(year) && (day != 29))
        res += 1;    
    return res;
}

int main(void) {
    char day = 1;
    char month = 3;
    short year = 2021;

    printf("Days till %2d-%2d-%4d: %d\n", day, month, year, days2date(day, month, year));
    return 0;
}

