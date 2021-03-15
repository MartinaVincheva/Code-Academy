#include <stdlib.h>
#include <stdio.h>

typedef struct node_t node_t;
typedef struct node_t
{
    int data;
    node_t *next;
} node_t;

extern node_t *first;
extern node_t *last;

int write(int n)
{
    node_t *p = last;
    last = (node_t *)malloc(sizeof(node_t));
    if (!last)
        return 1;
    last->data = n;
    last->next = NULL;
    if (p != NULL)
        p->next = last;
    if (first == NULL)
        first = last;
    return 0;
}

int read(int *n)
{
    if (first)
    {
        *n = first->data;
        node_t *p = first;
        first = first->next;
        free(p);
        return 1;
    }
    else
        return 0;
}

node_t *first = NULL;
node_t *last = NULL;
int main()
{
    int a = 1;

    while (a)
    {
        printf("Enter a digit:\n");
        scanf("%d", &a);
        write(a);
    }
    while (read(&a))
    {
        printf("%d, ", a);
    }
    printf("\n");

    return 0;
}