/*Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност.*/
#include <stdio.h>

int sum(int *a, int *b)
{
    return *a + *b;
}
typedef int (*t_Fsum)(int *, int *);
t_Fsum pSum = NULL;

int main()
{
    typedef int t_num;
    t_num a = 1;
    typedef int t_num1;
    t_num1 b = 5;
    typedef t_num *t_p1;
    typedef t_num1 *t_p2;
    t_p1 pa = &a;
    t_p2 pb = &b;

    printf("Sum of a = %d and b = %d sum = %d\n", a, b, sum(pa, pb));
    pSum = &sum;
    printf("Sum is: %d\n", pSum(pa, pb));

    return 0;
}
