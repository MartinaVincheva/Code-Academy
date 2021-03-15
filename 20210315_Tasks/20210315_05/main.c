/*Задача 5 . Да се напише рекурсивен вариант на
функцията за обхождане на двоично дърво */

#include "tree.h"

#define SIZE 11

treeNode_t *tree = NULL;

int main()
{
    int arr[SIZE] = {6, 5, 10, 8, 13, 3, 1, 7, 11, 12, 14};

    for (int i = 0; i < SIZE; i++)
        insert(arr[i]);

    printf("\n%d\n", tree->data);
    preorder(tree);
    printf("\n");

    int n = 8;
    treeNode_t *temp = search_rec(tree, n);
    printf("\nsearch_rec = %d\n", temp->data);
    printf("\n");

    deltree(tree);
    return 0;
}
