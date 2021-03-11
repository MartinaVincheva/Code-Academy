/* Задача 2 . Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са. */
#include <stdio.h>
#include <stdlib.h>

#define OPEN_SQUARE 91
#define CLOSE_SQUARE 93
#define OPEN_CURLY 123
#define CLOSE_CURLY 125
#define OPEN_ROUND 40
#define CLOSE_ROUND 41

int counter = 1;

void openBra(int *positionsList, unsigned *openedCount)
{
    *openedCount += 1;
    positionsList = (int *)realloc(positionsList, *openedCount * sizeof(int));
    positionsList[*openedCount - 1] = counter;
}

void closeBra(int *positionsList, unsigned *openedCount)
{
    *openedCount -= 1;
    if (*openedCount == 0)
    {
        positionsList = (int *)realloc(positionsList, 1 * sizeof(int));
    }
    else
    {
        positionsList = (int *)realloc(positionsList, *openedCount * sizeof(int));
    }
}

void output(int *positionList, unsigned counter, int type)
{
    for (int i = 0; i < counter; i++)
    {
        printf("\n%c on line %d was not closed!\n", type, positionList[i]);
    }
}

int main(int argc, char *argv[])
{
    unsigned countOpenedCurly = 0;
    int *curlyBrackets = (int *)malloc(sizeof(int));

    unsigned countOpenedSquare = 0;
    int *squareBrackets = (int *)malloc(sizeof(int));

    unsigned countOpenedRounded = 0;
    int *roundedBrackets = (int *)malloc(sizeof(int));

    FILE *fp = NULL;

    if (argc < 2)
    {
        printf("\nUsage:\n > %s file.c\n\n", argv[0]);
    }
    else
    {
        fp = fopen(argv[1], "r");
    }

    if (fp == NULL)
    {
        perror("Failed to open the file\n");
    }
    else
    {
        int c;
        while ((c = fgetc(fp)) != EOF)
        {
            if (c == '\n')
            {
                counter++;
                continue;
            }

            switch (c)
            {
            case OPEN_CURLY:
                openBra(curlyBrackets, &countOpenedCurly);
                break;
            case CLOSE_CURLY:
                closeBra(curlyBrackets, &countOpenedCurly);
                break;
            case OPEN_ROUND:
                openBra(roundedBrackets, &countOpenedRounded);
                break;
            case CLOSE_ROUND:
                closeBra(roundedBrackets, &countOpenedRounded);
                break;
            case OPEN_SQUARE:
                openBra(squareBrackets, &countOpenedSquare);
                break;
            case CLOSE_SQUARE:
                closeBra(squareBrackets, &countOpenedSquare);
                break;
            default:
                continue;
            }
        }
    }

    output(curlyBrackets, countOpenedCurly, OPEN_CURLY);
    output(roundedBrackets, countOpenedRounded, OPEN_ROUND);
    output(squareBrackets, countOpenedSquare, OPEN_SQUARE);

    fclose(fp);
    fp = NULL;

    free(curlyBrackets);
    free(squareBrackets);
    free(roundedBrackets);

    return 0;
}
