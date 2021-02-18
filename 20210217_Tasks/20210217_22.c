/*Задача22. Дадена е шахматна дъска 8 х 8 с една фигура кон, в някой от
четирите ъгъла. Напишете програма, която движи коня по
стандартния начин: 2 полета в една посока и едно
перпендикулярно на избраната посока с 2 те полета. Програмата
извежда всеки ход на коня във вида A1, C2, ... и завършва, когато
всички полета на дъската са обходени.*/
#include <stdio.h>
#include <stdlib.h>
int chess[14][13];      /*Define the chessboard*/
int CanPath[14][13][8]; /*Which of the eight directions of each piece can go*/
typedef struct
{ /*Eight directions of the board*/
    int x, y;
} direction;
direction dir[8] = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}}; //Eight directions of horse traversal
/*The design of the stack (the coordinates of each point reached in sequence, and the direction from the previous point to this point)*/
typedef struct
{
    int x, y; /*The horse's past position*/
    int di;   /*The direction the horse is going*/
} pathnode;
typedef struct
{
    pathnode pa[90];
    int top;
} path; /*Sequential stack*/
void Init_Path(path *p)
{ /*Initialize the stack*/
    p->top = -1;
}
int Push_Path(path *p, pathnode t)
{ /*The stack point and the direction of the next move to the stack*/
    if (p->top >= 89)
        return -1;
    else
    {
        p->top++;
        p->pa[p->top].x = t.x;
        p->pa[p->top].y = t.y;
        p->pa[p->top].di = t.di;
        return 1;
    }
}
int Empty_path(path p)
{ /*Judge whether the stack is empty*/
    if (p.top < 0)
        return 1;
    else
        return 0;
}
int Pop_Path(path *p, pathnode *t)
{ /*Pull*/
    if (Empty_path(*p))
        return -1;
    else
    {
        t->x = p->pa[p->top].x;
        t->y = p->pa[p->top].y;
        t->di = p->pa[p->top--].di;
        return 1;
    }
}

int Count(int x, int y)
{ /*Calculate how many directions around each node can go*/
    int count = 0, i = 0;
    for (i = 0; i < 8; i++)
        if (chess[x + 1 + dir[i].x][y + 1 + dir[i].y] == 0)
            count++;
    return count;
}
int Find_Direction(int x, int y)
{ /*Find the next direction, if it finds the return value, otherwise it is 0*/
    int dire, min = 9, count, d = 9;
    for (dire = 0; dire < 8; dire++)
    {
        if (chess[x + 1 + dir[dire].x][y + 1 + dir[dire].y] == 0 &&
            CanPath[x + 1][y + 1][dire] == 0)
        {
            count = Count(x + dir[dire].x, y + dir[dire].y);
            if (min > count)
            {
                min = count;
                d = dire;
            }
        }
    }
    if (d < 9)
        return d;
    else
        return -1;
}
void Mark_Dir()
{ /*Initialization, preparation for the realization of the stack, all marked as 0, indicating that all eight directions are paths*/
    int i, j, k;
    for (i = 0; i < 14; i++)
        for (j = 0; j < 13; j++)
            for (k = 0; k < 8; k++)
                CanPath[i][j][k] = 0; /*The horse's traversal is successful, that is, the path is 0*/
}
void Mark_Che()
{ /*Mark the board function, the area on the board is 0, and the edge of the area is set to 1*/
    int i, j;
    for (i = 0; i < 14; i++) /*First mark all as 0*/
        for (j = 0; j < 13; j++)
            chess[i][j] = 0;
    for (i = 0; i < 2; i++) /*The first two lines are marked as 1*/
        for (j = 0; j < 13; j++)
            chess[i][j] = 1;
    for (j = 0; j < 2; j++) /*The first two columns are marked as 1*/
        for (i = 0; i < 14; i++)
            chess[i][j] = 1;
    for (j = 11; j < 13; j++) /*The next two columns are marked as 1*/
        for (i = 0; i < 14; i++)
            chess[i][j] = 1;
    for (i = 12; i < 14; i++)
        for (j = 0; j < 13; j++) /*The next two lines are marked as 1*/
            chess[i][j] = 1;
}
void Horse(int x, int y) /*x,y indicate the starting position*/
{                        /*Horse's traversal function*/
    int num = 1, t, i;
    path p;
    pathnode f;
    Init_Path(&p);
    for (num = 1; num <= 90; num++)
    {
        t = Find_Direction(x, y);
        if (t != -1)
        { /*When the next direction is found normally*/
            chess[x + 1][y + 1] = num;
            f.x = x;
            f.y = y;
            f.di = t;
            Push_Path(&p, f);
            x = x + dir[t].x;
            y = y + dir[t].y;
        }
        else if (num == 90 && chess[x + 1][y + 1] == 0)
        { /*Traverse to the end, t is -1*/
            chess[x + 1][y + 1] = num;
            f.x = x;
            f.y = y;
            f.di = t;
            Push_Path(&p, f);
        }

        else
        {
            if (Pop_Path(&p, &f) == -1)
            { /*When the stack is popped and the stack is empty*/
                printf("Unable to find a suitable path for you!\n");
                exit(0);
            }
            num -= 2; /*Return to the previous point*/
            x = f.x;
            y = f.y;
            CanPath[x + 1][y + 1][f.di] = 1; /*The traversal is unsuccessful, that is, this direction is unreasonable*/
        }
    }
    /*Print the traversal path of the horse according to the information in the stack*/
    printf("The horse's traversal path is as follows:\n ");
    for (i = 0; i < 90; i++)
    {
        printf("(%2d,%2d)->", p.pa[i].x, p.pa[i].y);
        if ((i + 1) % (8) == 0)
            printf("\b\b  \n->");
    }
}
void main()
{ /*Main function*/
    int x, y;
    char ch = 'y';
    printf("Traversal of Chess Horse \n");
    printf("\n");
    while (ch == 'y')
    {
        Mark_Che();
        Mark_Dir();
        while (1)
        {
            printf("Please enter the abscissa of the entry point (between 1-10):");
            scanf("%d", &x);
            if (x < 1 || x > 10)
                printf("Input error, please re-enter! (The abscissa is between 1-10)\n");
            else
                break;
        }
        while (1)
        {
            printf("Please enter the ordinate of the entry point (between 1-9):");
            scanf("%d", &y);
            if (y < 1 || y > 9)
                printf("Input error, please re-enter! (The ordinate is between 1-9)\n");
            else
                break;
        }
        Horse(x, y);
        getchar();
        printf("\n");
        printf("Whether to continue the traversal of the horse (yes: y; no: other):");
        fflush(stdin);
        scanf("%c", &ch);
    }
}