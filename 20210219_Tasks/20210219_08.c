/*Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.*/
#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
};
struct rect
{
    struct point one;
    struct point two;
} screen;

struct point makePoint(int x, int y)
{
    struct point NewPoint = {x, y};
    return NewPoint;
}
void validateNumber(char *inString);

int main(int argc, char *argv[])
{
    if (argc != 3)
        exit(1);
    validateNumber(argv[1]);
    validateNumber(argv[2]);
    int p1 = atoi(argv[1]);
    int p2 = atoi(argv[2]);
    
    if(p1==p2){
        prinf("Points match");
        exit(2);
    
    struct point a = makePoint(p1, p1);
    struct point b = makePoint(p2, p2);
    struct rect screen = {a, b};

    for (int i = a.y; i < b.y; i++)
    {
        for (int j = a.x; j < b.x; j++)
        {
            printf("- ");
        }
        printf("\n");
    }
    return 0;
}
void validateNumber(char *inString)
{
    for (int i = 0; i < strlen(inString); i++)
    {
        if (!(
              (inString[i] >= '0') && (inString[i] <= '9')
             )
           )
        {
    	    exit(3); /* This input is a character,float or special symbol */
        }
    }
}
