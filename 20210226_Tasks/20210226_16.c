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

#define BOARD_WIDTH 8
#define BOARD_HEIGHT 3
#define PULL_COUNT 16
char board[BOARD_WIDTH][BOARD_HEIGHT];

void initialiseBoard(void)
{
    time_t t;
    srand((unsigned)time(&t));

    memset(board, -1, sizeof(board));
    for (int p = 0; p < PULL_COUNT;)
    {
        int x = rand() % BOARD_WIDTH;
        int y = rand() % BOARD_HEIGHT;

        if (-1 == board[x][y])
        {
            board[x][y] = p++;
        }
    }
}

void visualiseBoard(void)
{
    for (int y = 0; y < BOARD_HEIGHT; y++)
    {
        for (int x = 0; x < BOARD_WIDTH; x++)
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
    for (int y = 0; y < BOARD_HEIGHT; y++)
    {
        for (int x = 0; x < BOARD_WIDTH; x++)
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

void doMove(int x, int y)
{
    char temp[3];
    int newx, newy;

    printf("Please chose direction (u)p, (d)own, (l)eft, (r)ight:");
    gets(temp);
    printf("\n");
    switch (temp[0])
    {
    case 'u':
        newy = y - 2;
        newx = x;
        if ((newy >= 0) && (newy < BOARD_HEIGHT) && (-1 == board[newx][newy]))
        {
            board[newx][newy] = board[x][y];
            board[x][y - 1] = -1;
            board[x][y] = -1;
        }
        break;
    case 'd':
        newy = y + 2;
        newx = x;
        if ((newy >= 0) && (newy < BOARD_HEIGHT) && (-1 == board[newx][newy]))
        {
            board[newx][newy] = board[x][y];
            board[x][y + 1] = -1;
            board[x][y] = -1;
        }
        break;
    case 'l':
        newy = y;
        newx = x - 2;
        if ((newx >= 0) && (newx < BOARD_WIDTH) && (-1 == board[newx][newy]))
        {
            board[newx][newy] = board[x][y];
            board[x - 1][y] = -1;
            board[x][y] = -1;
        }
        break;
    case 'r':
        newy = y;
        newx = x + 2;
        if ((newx >= 0) && (newx < BOARD_WIDTH) && (-1 == board[newx][newy]))
        {
            board[newx][newy] = board[x][y];
            board[x + 1][y] = -1;
            board[x][y] = -1;
        }
        break;
    }
}

void playGame(void)
{
    char temp[3];
    char input;
    int posx, posy;

    for (;;)
    {
        visualiseBoard();
        printf("Please chose pull from 1 to 16 ('q' for end):");
        gets(temp);
        printf("\n");
        input = atoi(temp);
        if ('q' == temp[0])
            break;
        if ((input < 1) || (input > PULL_COUNT))
        {
            printf("Invalid input! Please try again!\n\n");
        }
        if (findPull(input, &posx, &posy))
        {
            doMove(posx, posy);
        }
        else
        {
            printf("Not found on the board!/n");
        }
    }
}

int main()
{
    printf("Welcome!\n");
    initialiseBoard();
    playGame();
    return 0;
}
