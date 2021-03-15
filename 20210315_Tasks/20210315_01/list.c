/* Задача 1 .  Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. Използвайте следния
елемент на динамичния списък: */
#include "list.h"

void init()
{
    start = NULL;
}

int push(int n)
{
    t_node *p = start;
    start = (t_node *)malloc(sizeof(t_node));
    if (!start)
    {
        return 1;
    }
    start->data = n;
    start->next = p;
    return 0;
}

int pop(int *n)
{
    if (start)
    {
        *n = start->data;
        t_node *p = start;
        start = start->next;
        free(p);
        return 1;
    }
    else
    {
        return 0;
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
