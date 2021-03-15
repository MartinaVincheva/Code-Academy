/*Използвайте динамична реализация на стек за въвеждане на поредица
от цели положителни числа и нейното извеждане върху екрана в
обратен ред. За край на поредицата от клавиатурата се въвежда 0*/

#include "list.h"

t_node *start = NULL;

int main()
{

    int a = 1;
    // char temp[3];
    while (a)
    {
        printf("Enter a digit:\n");
        // gets(temp);
        // a = atoi(temp);
        scanf("%d", &a);
        push(a);
    }

    while (pop(&a))
        printf("%d, ", a);

    printf("\n");
    return 0;
}