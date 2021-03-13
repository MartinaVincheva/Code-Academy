#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STACK 37
#define MELLONSORT 0
#define PUMKINSORT 1
#define PI 3.14

typedef struct
{
    int diameter;
    float crustwidth;
} watermellon;

void RandomMelonMetrics(watermellon *stack, int sort);
void FillStack(watermellon *stack, int sort);
float GetAvarageDiameter(watermellon *stack);
float GetAvarageCrustWidth(watermellon *stack);
float SphereVolume(float diameter);
void PrintMetrcis(watermellon *stack);

int main()
{
    srand(time(0));
    watermellon *stackA = (watermellon *)malloc(STACK * (sizeof(watermellon)));
    if (NULL == stackA)
    {
        printf("Memory allocation error!\n");
        exit(1);
    }
    watermellon *stackB = (watermellon *)malloc(STACK * (sizeof(watermellon)));
    if (NULL == stackB)
    {
        printf("Memory allocation error!\n");
        exit(2);
    }

    FillStack(stackA, MELLONSORT);
    FillStack(stackB, PUMKINSORT);
    printf("StackA (mellonsort) : \n");
    PrintMetrcis(stackA);
    printf("StackB (pumkin) : \n");
    PrintMetrcis(stackB);
    free(stackA);
    stackA = NULL;
    free(stackB);
    stackB = NULL;
    return 0;
}

void RandomMelonMetrics(watermellon *stack, int sort)
{
    if (sort == 0)
    {
        stack->diameter = ((rand() % 125) + 15);
        stack->crustwidth = (((float)rand() / RAND_MAX) * (0.5 - 3.5) + 3.5);
    }
    if (sort == 1)
    {
        stack->diameter = ((rand() % 60) + 35);
        stack->crustwidth = (((float)rand() / RAND_MAX) * (0.3 - 0.9) + 0.9);
    }
}
void FillStack(watermellon *stack, int sort)
{
    for (int i = 0; i < STACK; i++)
    {
        RandomMelonMetrics((stack + i), sort);
    }
}

float GetAvarageDiameter(watermellon *stack)
{
    float AvgDiam = 0.0;
    for (int i = 0; i < STACK; i++)
    {
        AvgDiam += stack[i].diameter / STACK;
    }
    return AvgDiam;
}
float GetAvarageCrustWidth(watermellon *stack)
{

    float AvgCRWdth = 0.0;
    for (int i = 0; i < STACK; i++)
    {
        AvgCRWdth += stack[i].crustwidth / STACK;
    }
    return AvgCRWdth;
}
float SphereVolume(float diameter)
{
    float radius = diameter / 2;
    return (4 / 3) * (PI * radius * radius * radius);
}
void PrintMetrcis(watermellon *stack)
{
    float avgDimeter;
    float avgWidth;
    avgDimeter = GetAvarageDiameter(stack);
    avgWidth = GetAvarageCrustWidth(stack);
    printf("Avarage diameter of the stack is :%.2f\n", avgDimeter);
    printf("Avarage crust width is %.2f\n", avgWidth);
    printf("Avarage volume of the edible part of the Melons in the stack : %.2f\n", SphereVolume((avgDimeter - 2 * (avgWidth))));
}
