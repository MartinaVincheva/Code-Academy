/* Задача 1 .  Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. Използвайте следния
елемент на динамичния списък: */
#include "list.h"

void init()
{
    start = NULL;
}

int add(int n)
{
    t_node *p = start;
    start = (t_node *)malloc(sizeof(t_node));
    if (!start)
    {
        return -1;
    }
    start->data = n;
    start->next = p;
    return 0;
}

int printNthElementFromTail(t_node *node, int n)
{
    if (node->next == NULL)
    {
        return 1;
    }
    else
    {
        int level = 1 + printNthElementFromTail(node->next, n);

        if (level == n)
            printf("Element 5 from end is %d\n", node->data);
        return (level);
    }
}

void printList()
{
    t_node *ptr = start;

    if (start == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    while (ptr != NULL)
    {
        printf("%d, ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void dellList(void)
{
    while (start->next != NULL)
    {
        t_node *p = start;
        start = start->next;
        free(p);
    }
    free(start);
    start = NULL;
}
