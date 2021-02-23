/*Задача 5. Направете масив от 10 структури от задача 4. Задайте стойност на 10
те дати, по избор.
struct name array[10]; / define array /
array[i].member = value; / set member value /
struct name array[10]= { {1,3,2019}, {3,4,2020}} / define and init array members /
struct name array[10] = { [1] = {3,4,2020} };  define and init array members /
struct name array[10] = {[1].month = 4,[1].year = 2020}; / define and init array members /*/
#include <stdio.h>
#include <string.h>

struct date
{
    char month[12];
    unsigned day;
    unsigned year;
};

struct date Calendar[10] =
    {
        {"January", 1, 2009},
        {"February", 2, 2010},
        {"March", 3, 2011},
        {"April", 4, 2012},
        {"May", 5, 2013},
        {"June", 6, 2014},
        {"July", 7, 2015},
        {"August", 8, 2016},
        {"September", 9, 2017},
        {"December", 10, 2018},
};

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Date : %d. %s. %d\n", Calendar[i].day, Calendar[i].month, Calendar[i].year);
    }
    return 0;
}