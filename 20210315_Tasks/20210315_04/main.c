/*Задача
4 . Да се изтрият в този ред върховете 1, 7, 12 и
14 от дървото на
- 6, 5, 10, 8, 13, 3, 1, 7, 11, 12, 14 */

#include "tree.h"

#define SIZE 11

treeNode_t *tree = NULL;

int main()
{
    int i;
    int arr[SIZE] = {6, 5, 10, 8, 13, 3, 1, 7, 11, 12, 14};

    for (i = 0; i < SIZE; i++)
        insert(arr[i]);

    printf("\n%d\n", tree->data);
    preorder(tree);
    printf("\n");
    del(3);
    printf("\n");
    preorder(tree);
    printf("\n");
    del(8);
    printf("\n");
    preorder(tree);
    printf("\n");
    del(11);
    printf("\n");
    preorder(tree);
    printf("\n");
    
    int n = 14;
    dellEnd(&n);
    printf("Del =%d\n",n);
    preorder(tree);
    printf("\n");

    deltree(tree);
    return 0;
}
