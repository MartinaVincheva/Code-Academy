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

int del(int n)
{
    treeNode_t *current = search(n);
    treeNode_t *parent = current;
    if (current->right == NULL && current->left != NULL)
    {
        printf("To be del =%d\n", current->left->data);
        current = current->left;
        free(current);
        parent->left = NULL;
    }
    else if (current->right != NULL && current->left == NULL)
    {
        printf("del =%d\n", current->right->data);
        current = current->right;
        free(current);
        parent->right = NULL;
    }
}
treeNode_t *insert(int d)
{
    treeNode_t *tmp = (treeNode_t *)malloc(sizeof(treeNode_t));
    treeNode_t *current = NULL;
    treeNode_t *parent = NULL;
    tmp->data = d;
    tmp->right = tmp->left = NULL;
    if (NULL == tree)
    {
        tree = tmp;
    }
    else
    {
        current = tree;
        while (1)
        {
            parent = current;
            if (d < parent->data)
            {
                current = current->left;
                if (current == NULL)
                {
                    parent->left = tmp;
                    return tmp;
                }
            }
            else
            {
                current = current->right;
                if (current == NULL)
                {
                    parent->right = tmp;
                    return tmp;
                }
            }
        }
    }
}
treeNode_t *search(int d)
{
    treeNode_t *current = tree;
    printf("Visiting elements: ");
    while (current->data != d)
    {
        if (current != NULL)
            printf("%d, ", current->data);
        if (current->data > d)
            current = current->left;
        else
            current = current->right;
        if (current == NULL)
            return NULL;
    }
    return current;
}
void preorder(treeNode_t *n)
{
    if (n)
    {
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}
int add(int n, treeNode_t *t)
{
    if (NULL == t)
    {
        t = (treeNode_t *)malloc(sizeof(treeNode_t));
        t->data = n;
        t->left = t->right = NULL;
    }
    else if (t->data > n)
    {
        add(n, t->right);
    }
    else if (t->data < n)
    {
        add(n, t->left);
    }
    else
        fprintf(stderr, "Елементът е вече в дървото!\n");
}
treeNode_t *search_iter(treeNode_t *t, int n)
{
    while ((t != NULL) && (t->data != n))
    {
        if (t->data < n)
            t = t->right;
        else
            t = t->left;
    }
    return t;
}
treeNode_t *search_rec(treeNode_t *t, int n)
{
    if (t != NULL)
        if (t->data < n)
            t = search_rec(t->right, n);
        else if (t->data > n)
            t = search_rec(t->left, n);
    return t;
}
void printCurr(treeNode_t *curr)
{
    treeNode_t *p = curr;
    printf("curr - %d", p->data);
}
