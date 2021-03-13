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

t_node *search_iter(int k)
{
    t_node *p = start;
    while (p->data != k)
    {
        if (p->next == NULL)
            return NULL;
        else
            p = p->next;
    }
    return p;
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

void printCurrent(t_node *current)
{
    t_node *p = current;
    printf("current element = %d\n", p->data);
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
