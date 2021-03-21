#include <stdio.h>
#include <stdlib.h>
#include "list.h"

node *addNodeToStart(node *list_start, void *data)
{
    node *new_node = malloc(sizeof(node));

    new_node->next = list_start;
    new_node->data = data;
    return (new_node);
}

int lenghtList(node *list_start)
{
    int count = 0;

    while (list_start != NULL)
    {
        count++;
        list_start = list_start->next;
    }
    return count;
}

void dellList(node *list_start, void (*free_data)(void *data))
{
    if (NULL == list_start)
    {
        return;
    }
    while (list_start->next != NULL)
    {
        node *p = list_start;

        list_start = list_start->next;
        free_data(p->data);
        free(p);
    }
    free(list_start);
}

node *getNextNode(node *n)
{
    return (n->next);
}

node *searchListNode(node *start_node, char *string, int (*compare)(void *data, char *string))
{
    node *p = start_node;

    printf("Search string:<%s>", string);
    do
    {
        if (0 == compare(p->data, string))
        {
            return p;
        }
        else
        {
            p = p->next;
        }
    } while (p != NULL);
    return NULL;
}

static void swapNodes(node *node1, node *node2)
{
    void *temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}

void sortList(node *start_node, int (*compare)(void *card1, void *card2))
{
    int swapped, i;
    struct node *ptr1;
    struct node *lptr = NULL;

    if (start_node == NULL)
    {
        return;
    }
    do
    {
        swapped = 0;
        ptr1 = start_node;

        while (ptr1->next != lptr)
        {
            if (compare(ptr1->data, ptr1->next->data) > 0)
            {
                swapNodes(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}
