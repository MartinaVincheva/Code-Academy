/* Задача 1 .  Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. Използвайте следния
елемент на динамичния списък: */
#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct t_node t_node;

typedef struct t_node
{
    int data;
    t_node *next;
} t_node;

extern t_node *start;

void init();
int add(int n);
int printNthElementFromTail(t_node *node, int n);
void printList();
void dellList(void);
