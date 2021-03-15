/* Задача 2 */
#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode_t treeNode_t;
struct treeNode_t
{
    int data;
    treeNode_t *left;
    treeNode_t *right;
};

extern treeNode_t *tree;

void insertX(int x, treeNode_t **tree);
treeNode_t *insert(int d);
void printRight(treeNode_t *tree);
void printLeft(treeNode_t *tree);
void deltree(treeNode_t *tree);

treeNode_t *insert(int d);
treeNode_t *search(int d);
void preorder(treeNode_t *n);
int add(int n, treeNode_t *t);
treeNode_t *search_iter(treeNode_t *t, int k);
treeNode_t *search_rec(treeNode_t *t, int n);
int del(int n);
void printCurr(treeNode_t *curr);
void dellEnd(int *n);
