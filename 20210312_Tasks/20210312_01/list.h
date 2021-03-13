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
int addAfter(int n, int k);
int addPrev(int n, int k);
int addEnd(int n);

int dellFirst(int *n);
t_node *dellElemReturnAfter(int *n, int k);
void dellEnd(int *n);

t_node *search_iter(int n);

void printList();
void printAfter(t_node *current);
void printCurrent(t_node *current);

void dellList(void);
