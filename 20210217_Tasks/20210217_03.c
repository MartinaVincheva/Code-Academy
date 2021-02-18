/*Задача3. Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция. */
#include <stdio.h>
#include <stdlib.h>
int fnPlus(int nA, int nB) { return (nA + nB); }
int fnMinus(int nA, int nB) { return (nA - nB); }
int fnMultyply(int nA, int nB) { return (nA * nB); }
int fnDevide(int nA, int nB) { return (nA / nB); }

int main()
{
    int (*pfCalc)(int, int) = NULL;
    int choice, a, b;
    printf("Welcome!\n Please chose which function you want to use:\n Press 1 for PLUS\n Press 2 for MIN\n Press 3 for Multiply\n Press 4 for Devide\n Your choice: ");
    scanf(" %d", &choice);
    printf("Please enter value for a =");
    scanf(" %d", &a);
    printf("Please enter value for b =");
    scanf(" %d", &b);

    if (choice == 1)
    {
        pfCalc = fnPlus;
        printf("Result of a + b is :%d \n", pfCalc(a, b));
    }
    else if (choice == 2)
    {
        pfCalc = fnMinus;
        printf("Result of a - b is :%d \n", pfCalc(a, b));
    }
    else if (choice == 3)
    {
        pfCalc = fnMultyply;
        printf("Result of a . b is :%d \n", pfCalc(a, b));
    }
    else if (choice == 4)
    {
        pfCalc = fnDevide;
        printf("Result of a / b is :%d \n", pfCalc(a, b));
    }

    return 0;
}