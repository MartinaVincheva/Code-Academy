/*Задача 2 . Напишете функцията за добавяне на елемент в дървото рекурсивно
с двоен пойнтер подаван като параметър:
void insert(int x, struct tree **T)*/

#include "tree.h"

treeNode_t *tree = NULL;

int main()
{
    insertX(30, &tree);
    insertX(10, &tree);
    insertX(45, &tree);
    insertX(7, &tree);
    insertX(100, &tree);
    insertX(5, &tree);

    printf("Right part:");
    printRight(tree);
    printf("\nLeft part:");
    printLeft(tree);
    printf("\n");

    deltree(tree);
    return 0;
}
