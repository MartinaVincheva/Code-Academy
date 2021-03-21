#pragma once

typedef struct node node;
typedef struct node
{
    void *data;
    node *next;
} node;

node *addNodeToStart(node *list_start, void *data);
int lenghtList(node *start);
void dellList(node *list_start, void (*free_data)(void *data));
node *getNextNode(node *n);
node *searchListNode(node *start_node, char *string, int (*compare)(void *data, char *string));
void sortList(node *start_node, int (*compare)(void *card1, void *card2));
