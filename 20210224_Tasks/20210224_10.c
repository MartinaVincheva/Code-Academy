/*Задача 10.
Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));*/
#include <stdio.h>
#include <math.h>

#define AVG(x, y) printf("Average is %d\n", (x + y) / 2);
#define AVG_SET_NUMBERS(res, x, y)   \
    {                                \
        res = 0;                     \
        for (int i = x; i <= y; i++) \
            res += i;                \
        res /= (y - x) + 1;          \
    }
#define TO_POW(x, y)                              \
    {                                             \
        float power = 1;                          \
        for (int i = 0; i < y; i++)               \
        {                                         \
            power = power * x;                    \
        }                                         \
        printf("Result of x^y is %.2f\n", power); \
    }
#define TO_UPPER(x) ((x - 'a') + 'A')
#define DISP(f, x) printf(#f "(%g) = %g\n", x, f(x))

int main()
{
    float result;
    char letter;
    AVG(10, 4);
    AVG_SET_NUMBERS(result, 2, 4);
    printf("Average is %.2f\n", result);
    TO_POW(2, 3);
    letter = TO_UPPER('a');
    printf("Letter a to upper ->%c \n", letter);
    DISP(sqrt, 3.0);

    return 0;
}