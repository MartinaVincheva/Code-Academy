/*Задача 14. Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.;*/
#include <stdio.h>

struct date
{
    unsigned month m:1;
    unsigned day d:1;
    unsigned year y:1;
};

int main()
{

    return 0;
}