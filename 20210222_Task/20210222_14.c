/*Задача 14. Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.;*/
#include <stdio.h>

struct date
{
    short int month : 8;
    short int day : 8;
    short int year : 16;
};

int ValidateDate(struct date *p_Struct)
{
    if ((p_Struct->day < 1 || p_Struct->day > 31) || (p_Struct->month < 1 || p_Struct->month > 12) || (p_Struct->year < 1))
        return 0;
    else
        return 1;
}

void my_print(struct date *p_Struct)
{
    printf("Date is : %d.%d.%d .\n", p_Struct->day, p_Struct->month, p_Struct->year);
}

int main()
{
    struct date FirstDate = {23, 2, 2021};

    if (ValidateDate(&FirstDate) != '0')
    {
        printf("Validate ");
        my_print(&FirstDate);
    }
    else
        printf("Error!\n");

    return 0;
}