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
#include <stdlib.h>

const char labirint[7][7] = {{'3', '3', '2', '4', '3', '1', '2'}, {'2', '4', '2', '3', '2', '4', '3'}, {'4', '2', '3', '2', '4', '2', '1'}, {'4', '4', '1', '2', '2', '3', '4'}, {'3', '2', '3', '3', '4', '2', '2'}, {'3', '2', '4', '2', '3', '2', '1'}, {'1', '1', '3', '3', '4', '2', 'F'}};

typedef struct
{
    int x;
    int y;
    int oldX;
    int oldY;
} playerPosition;

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
                printf("%c", labirint[i][j]);
            }
        }
    }
    printf("\n");
}
void moves(playerPosition *pos, int direction)
{
    switch (direction)
    {
    case 1:
        if (pos->y - labirint[pos->y][pos->x] - '0' >= 0)
        {
            pos->oldY = pos->y;
            pos->y -= labirint[pos->y][pos->x] - '0';
        }
        break;
    case 2:
        if (pos->x + labirint[pos->y][pos->x] - '0' < 7)
        {
            pos->oldX = pos->x;
            pos->x += labirint[pos->y][pos->x] - '0';
        }
        break;
    case 3:
        if (pos->y + labirint[pos->y][pos->x] - '0' < 7)
        {
            pos->oldY = pos->y;
            pos->y += labirint[pos->y][pos->x] - '0';
        }
        break;
    case 4:
        if (pos->x - labirint[pos->y][pos->x] - '0' >= 0)
        {
            pos->oldX = pos->x;
            pos->x -= labirint[pos->y][pos->x] - '0';
        }
        break;
    }
}

void movesBack(playerPosition *pos)
{
    pos->x = pos->oldX;
    pos->y = pos->oldY;
}

void playGame()
{
    char players;
    int direction;
    int gameInPlay = 1;
    char temp[3];

    printf("Please enter players count:");
    gets(temp);
    players = atoi(temp);

    playerPosition *playersData = (playerPosition *)malloc(players * sizeof(playerPosition));

    for (int i = 0; i < players; i++)
    {
        playersData[i].x = 0;
        playersData[i].y = 0;
        playersData[i].oldX = 0;
        playersData[i].oldY = 0;
    }
    do
    {
        for (int i = 0; i < players; i++)
        {
            int px = playersData[i].x, py = playersData[i].y;
            if (labirint[px][py] != 'F')
            {
                printf("*************************\n");
                printf("Player %d you have %c moves in direction. Here is your position:\n", i + 1, labirint[py][px]);
                printLab(px, py);
                printf("Move: <r>ight, <l>eft, <u>p, <d>own Undo move:<b>ack\n");
                printf("Please enter direction which you want to go:");
                gets(temp);
                switch (temp[0])
                {
                case 'u':
                    direction = 1;
                    break;
                case 'r':
                    direction = 2;
                    break;
                case 'd':
                    direction = 3;
                    break;
                case 'l':
                    direction = 4;
                    break;
                case 'b':
                    movesBack(&playersData[i]);
                    break;
                default:
                    printf("***Wrong input!*** Please try again!\n");
                    continue;
                }
                moves(&playersData[i], direction);
                printf("Position after move:\n");
                printLab(playersData[i].x, playersData[i].y);
                printf("*************************\n");
            }
            else
            {
                printf("***CONGRATULATIONS!*** Player %d YOU WON THE GAME!\n", i + 1);
                gameInPlay = 0;
                break;
            }
        }
    } while (gameInPlay);
    free(playersData);
}

int main(void)
{
    printf("*************************\n");
    printf("Welcome to Labirint game!\n");
    printf("*************************\n");
    playGame();
    return 0;
}