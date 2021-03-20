#include <stdio.h>
#include <stdlib.h>
#include "list.h"

business_card *addNodeToStart(business_card *list_start, business_card *node)
{
    if (list_start == NULL)
    {
        node->next = NULL;
        list_start = node;
    }
    else
    {
        node->next = list_start;
        list_start = node;
    }
    return (list_start);
}

int lenghtList(business_card *start)
{
    business_card *temp = start;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void dellList(business_card *start)
{
    if (NULL == start)
    {
        return;
    }
    while (start->next != NULL)
    {
        business_card *p = start;
        free(start->firstName);
        free(start->middleName);
        free(start->lastName);
        free(start->company);
        free(start->companyAddress);
        free(start->email);
        start = start->next;
        free(p);
    }
    free(start);
    start = NULL;
}
