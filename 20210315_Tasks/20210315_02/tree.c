/* Задача 2*/
#include "tree.h"

void insertX(int x, treeNode_t **tree)
{
    treeNode_t *p = NULL;
    if (!(*tree))
    {
        p = (treeNode_t *)malloc(sizeof(treeNode_t));
        p->left = p->right = NULL;
        p->data = x;
        *tree = p;
        return;
    }

    if (x < (*tree)->data)
    {
        insertX(x, &(*tree)->left);
    }
    else if (x > (*tree)->data)
    {
        insertX(x, &(*tree)->right);
    }
}

void printRight(treeNode_t *tree)
{
    treeNode_t *p = tree;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->right;
    }
}
void printLeft(treeNode_t *tree)
{
    treeNode_t *p = tree;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->left;
    }
}

void deltree(treeNode_t *tree)
{
    if (tree)
    {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}