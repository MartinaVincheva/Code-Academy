#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/*Aritmetic with int*/
int fnPlus(int nA, int nB)
{
    return (nA + nB);
}
int fnMinus(int nA, int nB)
{
    return (nA - nB);
}
int fnMultyply(int nA, int nB)
{
    return (nA * nB);
}
int fnDevide(int nA, int nB)
{
    return (nA / nB);
}
int incr(int c)
{
    return ++c;
}
float SofTriangle(int a, int b)
{
    return (float)a * b / 2;
}
int NOK(int a, int b)
{
    int i;

    for (i = a < b ? b : a; i < a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
    }
    return a * b;
}
/*Aritmetic with float*/
float SofRectangle(float sOfTriangle)
{
    return sOfTriangle * 2;
}
float AbsoluteValue(float num)
{
    return num < 0 ? -num : num;
}
float sqaureRoot(float num)
{
    if (num < 0)
    {
        return (-1);
    }
    else
    {
        return (sqrt(num));
    }
}
/*Aritmetic with pointers/string*/
void reverse(char str[])
{
    int i, j;
    char c;

    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
    printf("%s\n", str);
}
void printstr(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        printf("%c\n", s[i]);
        i++;
    }
}
int my_atoi(char *s)
{
    int i, n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
    {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}
double my_atof(char *s)
{
    double a, power;
    int i = 0;

    for (a = 0.0; isdigit(s[i]); i++)
        a = 10.0 * a + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        a = 10.0 * a + (s[i] - '0');
        power = power * 10;
    }
    return a / power;
}
void my_itoa(int n, char s[])
{
    char *p = s;

    do
    {
        *p++ = n % 10 + '0';
        n = n / 10;
    } while (n != 0);
    *p = '\0';
    reverse(s);
}
void lower(char s[])
{
    int i, c, res;

    while (((c = getchar()) != '\n'))
    {
        i++;
        if (c >= 'A' && c <= 'Z')
            c = c + 32;
        res = putchar(c);
    }
    return;
}
int getline(char s[], int lim)
{
    int c;
    char *p = s;

    while (((c = getchar()) != '\n') && ((p - s) < lim))
    {
        *p++ = c;
    }
    *p = '\0';
    return p - s;
}
void countLetters(char s[], int n[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'z')
        {
            n[s[i] - 'A']++;
        }
        i++;
    }
}
int compare(char *s, char *t)
{
    char *temp = s;

    while (*s)
    {
        char *p = t;
        while (*p && *s != *p)
        {
            p++;
        }
        if (*p == '\0')
            return 0;
        s++;
    }
    while (*t)
    {
        char *p = temp;
        while (*p && *t != *p)
        {
            p++;
        }
        if (*p == '\0')
            return 0;
        t++;
    }

    return 1;
}
void squeeze(char s[], int c)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}
double Mult(int endNumber)
{
    int i;
    double multiply = 1;

    for (i = 1; i <= endNumber; i++)
    {
        multiply = multiply * i;
    }
    return multiply;
}
double average(unsigned int *arr, int arrSize)
{
    int i;
    double res = 0.0;

    for (i = 0; i < arrSize; i++)
    {
        res += arr[i];
    }
    res /= arrSize;

    return res;
}
void my_swap(int *ptr_a, int *ptr_b)
{
    *ptr_a = *ptr_a + *ptr_b;
    *ptr_b = *ptr_a - *ptr_b;
    *ptr_a = *ptr_a - *ptr_b;
}
void Mystrcpy(char *t, char *s)
{
    while (*t++ = *s++)
        ;
    printf("%s", s);
}
void copyString(char *str1, char *str2)
{

    while (*str1 != '\0')
    {
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
}

int isLeapYear(unsigned int year)
{
    if (year % 400 == 0)
    {
        return 1;
    }
    else if (year % 100 == 0)
    {
        return 0;
    }
    else if (year % 4 == 0)
    {
        return 1;
    }
    return 0;
}
void PalindromeCheck(unsigned int *arr, int l)
{
    int beg = 0;
    int end = l - 1;
    int mid = l / 2;

    for (beg = 0; beg < mid; beg++)
    {
        if (arr[beg] != arr[end])
        {
            printf("Array is not Palindrome.\n");
            break;
        }
        end--;
    }
    if (beg == mid)
        printf("Array is Palindrome.\n");
}
float avgOfRandNumbers(int *s, int size)
{
    int sum = 0, temp;
    int *p = s;
    float avg;

    for (int i = 0; i < size; i++)
    {
        temp = rand() % size;
        *p++ = temp;
        sum += temp;
    }
    printf("Sum of random numbers = %d\n", sum);
    avg = (float)sum / size;

    return (float)avg;
}