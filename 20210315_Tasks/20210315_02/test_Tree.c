#include "tree.h"

#define SIZE 9

treeNode_t *tree = NULL, *z;

int main(void)
{
    int i;
    int arr[SIZE] = {22, 16, 32, 10, 31, 79, 82, 18, 14};

    for (i = 0; i < SIZE; i++)
        insert(arr[i]);

    z = tree;

    printf("\n%d\n", z->data);
    preorder(z);
    treeNode_t *tmp = search_iter(z, 79);
    printf("\nsearch_iter = %d\n", tmp->data);
    tmp = search_rec(z, 16);
    printf("\nsearch_rec = %d\n", tmp->data);
    del(79);
    preorder(z);
    printf("\n");

    i = 82;
    treeNode_t *t;

    if ((t = search(i)) != NULL)
        printf("\n[%d] Element found.\n", t->data);
    else
        printf("\n[x] Elament %d not found .\n", i);
    return 0;
}