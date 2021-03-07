/* Задача 4.Да се състави програма, с помощта на която 2
(3, 1) играчи могат да играят (с право на връщане на
ходовете) следната игра ЛАБИРИНТ: Трябва да се достигне
до финала, отбелязан с F. Числото във всяка клетка
показва броя стъпки по права линия, които могат да са
направят при следващия ход. Като се започне от горния
ляв ъгъл, са възможни само два хода
3324312
2423243
4232421
4412234
3233422
3242321
113342F */
#include <stdio.h>

const int labirint[7][7] = {{3, 3, 2, 4, 3, 1, 2}, {2, 4, 2, 3, 2, 4, 3}, {4, 2, 3, 2, 4, 2, 1}, {4, 4, 1, 2, 2, 3, 4}, {3, 2, 3, 3, 4, 2, 2}, {3, 2, 4, 2, 3, 2, 1}, {1, 1, 3, 3, 4, 2, 0}};

int x = 0, y = 0, oldX = 0, oldY = 0;

void printLab(int x, int y)
{
    for (int i = 0; i < 7; i++)
    {
        printf("\n");
        for (int j = 0; j < 7; j++)
        {
            if (j == x && i == y)
            {
                printf("$");
            }
            else
            {
                printf("%d", labirint[i][j]);
            }
        }
    }
    printf("\n");
}
void moves(int direction)
{
    switch (direction)
    {
    case 1:
        if (y - labirint[y][x] >= 0)
        {
            oldY = y;
            y -= labirint[y][x];
        }
        break;
    case 2:
        if (x + labirint[y][x] < 7)
        {
            oldX = x;
            x += labirint[y][x];
        }
        break;
    case 3:
        if (y + labirint[y][x] < 7)
        {
            oldY = y;
            y += labirint[y][x];
        }
        break;
    case 4:
        if (x - labirint[y][x] >= 0)
        {
            oldX = x;
            x -= labirint[y][x];
        }
        break;
    default:
        break;
    }
}

void goBack()
{
    x = oldX;
    y = oldY;
}
void playGame()
{
    unsigned input;
    int direction;
    printLab(x, y);
    printf("You have %d moves\n", labirint[y][x]);
    printf("For right press 1\nFor down press 2\nFor left press 3\nFor up press 4\nFor going back press 0\n");
    scanf("%d", &input);
    switch (input)
    {
    case '1':
        direction = 1;
        break;
    case '2':
        direction = 2;
        break;
    case '3':
        direction = 3;
        break;
    case '4':
        direction = 4;
        break;
    case '0':
        goBack();
        break;
    default:
        printf("Wrong input");
        playGame();
        break;
    }

    moves(direction);
    if (x == 6 && y == 6)
    {
        printf("***CONGRATULATIONS!*** YOU WIN!");
    }
    else
    {
        playGame();
    }
}

int main(void)
{
    printf("Welcome to Labirint game!\n Here is your start position:");
    printLab(x, y);
    playGame();

    return 0;
}
