/*Задача 16.Да се състави програма, с помощта на която играч може да
играе (с право на връщане на ходовете) следната игра СОЛИТЕР:
На игралното поле са поставени 16 номерирани пулове и три реда
с по осем позиции. Целта е да се извадят от игра всички пулове с
изключение на номер 1. Може да се прескача през някой пул на
свободна клетка, но не се разрешава движение по диагонал.
Например възможни са ходове 1 9; 2 10; 1 2 и т.н. По тази схема 1
прескача 9 и 9х излиза от игра отстранява се от полето, след
това 2 прескача 10 и 10 отпада от играта; по нататък 1 прескача 2 и
2 излиза от игра.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

char board[8][3];

void initialiseBoard(void)
{
    time_t t;
    srand((unsigned)time(&t));

    memset(board, -1, sizeof(board));
    for (int p = 0; p < 16;)
    {
        int x = rand() % 8;
        int y = rand() % 3;

        if (-1 == board[x][y])
        {
            board[x][y] = p++;
        }
    }
}

void visualiseBoard(void)
{
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 8; x++)
        {
            if (-1 == board[x][y])
            {
                printf("|  ");
            }
            else
            {
                printf("|%2d", board[x][y] + 1);
            }
        }
        printf("|\n");
    }
}

bool findPull(char pull, int *posx, int *posy)
{
    pull--;
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 8; x++)
        {
            if (pull == board[x][y])
            {
                *posx = x;
                *posy = y;
                return true;
            }
        }
    }
    *posx = -1;
    *posy = -1;
    return false;
}

int main()
{
    int x, y;

    initialiseBoard();
    visualiseBoard();
    if (findPull(5, &x, &y))
        printf("Found at %d, %d\n", x, y);
    else
        printf("Not found!\n");
    if (findPull(17, &x, &y))
        printf("Found at %d, %d\n", x, y);
    else
        printf("Not found!\n");
        
    return 0;
}
