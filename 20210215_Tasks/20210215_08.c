/*Задача 8.Дефинирайте и инициализирайте променлива и пойнтер към нея.
 Отпечатайте адреса на пойнтера с %p с printf.*/
#include <stdio.h>

int main()
{
    float f = 5.5;
    float *pf = &f;
    printf("address of *pf is %p.\n", &pf);
    return 0;
}