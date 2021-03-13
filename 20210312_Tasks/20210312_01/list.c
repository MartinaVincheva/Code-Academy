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

int addAfter(int n, int k)
{
    t_node *q;
    t_node *p = start;

    while (p->data != k)
        p = p->next;
    q = (t_node *)malloc(sizeof(t_node));
    if (!q)
        return -1;
    q->data = n;
    q->next = p->next;
    p->next = q;
    return 0;
}

int addPrev(int n, int k)
{
    t_node *q;
    t_node *p = start;
    while (p->data != k)
        p = p->next;
    q = (t_node *)malloc(sizeof(t_node));
    q->next = p->next;
    q->data = p->data;
    p->next = q;
    p->data = n;
    return 0;
}

int addEnd(int n)
{
    t_node *p = start;
    t_node *q = (t_node *)malloc(sizeof(t_node));

    if (!q)
        return -1;
    while (p->next != NULL)
        p = p->next;
    p->next = q;
    q->data = n;
    q->next = NULL;
    return 0;
}

int dellFirst(int *n)
{
    t_node *p = start;

    if (NULL != start)
    {
        *n = start->data;
        start = start->next;
        free(p);
        return 0;
    }
    else
        return 1;
}

t_node *dellElemReturnAfter(int *n, int k)
{
    t_node *p = start;
    t_node *q;

    while (p->data != k)
    {
        if (p->next == NULL)
        {
            return NULL;
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    *n = p->data;
    q->next = p->next;
    free(p);
    return q->next;
}

void dellEnd(int *n)
{
    t_node *q;
    t_node *p = start;

    while (p->next != NULL)
    {
        q = p;
        p = p->next;
    }
    *n = p->data;
    q->next = NULL;
    free(p);
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

void printAfter(t_node *current)
{
    t_node *p = current;

    while (p != NULL)
    {
        printf("%d, ", p->data);
        p = p->next;
    }
    printf("\n");
}

void printCurrent(t_node *current)
{
    t_node *p = current;
    printf("current = %d\n", p->data);
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
