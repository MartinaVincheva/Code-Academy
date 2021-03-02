/*Задача 17.Кое е по добре да купите: А броя дини от сорт мелон с диаметър Х сантиметра
и дебелина на кората D сантиметър или В броя дини с диаметър У сантиметра и
същата дебелина на кората D2? Създайте структура диня с два елемента
диаметър и дебелина на кората заделете динамично с malloc() за масив от А на
брой дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.5 и
3.5 см. Създайте структура диня с два елемента диаметър и дебелина на кората
заделете динамично с malloc() за масив от В на брой дини от сорт пъмпкин и
попълнете данните за диаметър между 35 и 95 см с функцията rand(), за всяка
една диня в масива и дебелина на кората между 0.3 и 0.9 см. Намерете средната
големина на динята и средната дебелина на кората и ги съпоставете с тези от
втория масив. Изведете на екрана купчината от кой сорт е по добре да се купи.
Изход:
По
добре е да се купят ... дини с диаметър ... сантиметра и кора с дебелина D
см вместо ... дини с диаметър ... см и дебелина на кората D1 см.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STACK 37
#define MELLON_SORT 0
#define PUMPKIN_SORT 1
#define PI 3.14

typedef struct
{
    int diameter;
    float crustWidth;
} watermellon;

void randomMellonMetrics(watermellon *stack, int sort);
void fillStack(watermellon *stack, int sort);
void printStack(watermellon *stack);
float getAverageDiameter(watermellon *stack);
float getAverageCrustWidth(watermellon *stack);
float sphereVolume(float diameter);
void printMetrics(watermellon *stack);

int main()
{
    srand(time(0));
    watermellon *stackA = (watermellon *)malloc(STACK * sizeof(watermellon));
    if (NULL == stackA)
    {
        printf("Memory allocation error!\n");
        exit(1);
    }
    watermellon *stackB = (watermellon *)malloc(STACK * sizeof(watermellon));
    if (NULL == stackB)
    {
        printf("Memory allocation error!\n");
        exit(2);
    }

    fillStack(stackA, MELLON_SORT);
    fillStack(stackB, PUMPKIN_SORT);

    printf("Stack A(Mellon Sort):\n");
    printMetrics(stackA);
    printf("Stack B(Pumpkin Sort):\n");
    printMetrics(stackB);

    free(stackA);
    stackA = NULL;
    free(stackB);
    stackB = NULL;

    return 0;
}

void randomMellonMetrics(watermellon *stack, int sort)
{
    if (sort == 0)
    {
        stack->diameter = ((rand() % 125) + 15);
        stack->crustWidth = (((float)rand() / RAND_MAX) * (0.5 - 3.5) + 3.5);
    }
    if (sort == 1)
    {
        stack->diameter = (rand() % 60) + 35;
        stack->crustWidth = (((float)rand() / RAND_MAX) * (0.3 - 0.9) + 0.9);
    }
}

void fillStack(watermellon *stack, int sort)
{
    for (int i = 0; i < STACK; i++)
    {
        randomMellonMetrics((stack + i), sort);
    }
}

float getAverageDiameter(watermellon *stack)
{
    float averageDiameter = 0.0;
    for (int i = 0; i < STACK; i++)
    {
        averageDiameter += stack[i].diameter / STACK;
    }
    return averageDiameter;
}

float getAverageCrustWidth(watermellon *stack)
{
    float averageCrustWidth = 0.0;
    for (int i = 0; i < STACK; i++)
    {
        averageCrustWidth += stack[i].crustWidth / STACK;
    }
    return averageCrustWidth;
}

float sphereVolume(float diameter)
{
    float r = diameter / 2;
    return (4 / 3) * (PI * r * r * r);
}

void printStack(watermellon *stack)
{
    for (int i = 0; i < STACK; i++)
    {
        printf("D: %d, Cw:%.2f\n", stack[i].diameter, stack[i].crustWidth);
    }
}

void printMetrics(watermellon *stack)
{
    float averageDiameter, averageCrustWidth;

    averageDiameter = getAverageDiameter(stack);
    averageCrustWidth = getAverageCrustWidth(stack);
    printf("Avegage diameter of the stack is: %.2f\n", averageDiameter);
    printf("Average crust width of the stack is: %.2f\n", averageCrustWidth);
    printf("Average volume of the edible part of a mellon from the stack is: %.2fsm3\n\n", sphereVolume((averageDiameter - (2 * averageCrustWidth))));
}