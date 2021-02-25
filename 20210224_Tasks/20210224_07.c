/*Задача 7. Напишете заглавен файл с декларации на функции и
сложете гардове. Този начин намалява времето за компилиране на
големи проекти.
#ifndef _MYHEADER_H_
#define _MYHEADER_H_
/ header declarations /
#endif // _MYHEADER_H_ 
*/
#include <stdio.h>
#include "myheader.h"

int main(void)
{
    int a = 5, b = 1;
    myfunc(a);
    myfunc1(b);
    return 0;
}

/* Упражнение 6. Прочетете за директивата #pragma once. Отговорете
дали тази директива е еквивалентна на гарда в упражнение 4 .
Отг. - Директиравата #pragma once е еквивалентна на :
#ifndef _MYHEADER_H_
#define _MYHEADER_H_
#endif // _MYHEADER_H_   */