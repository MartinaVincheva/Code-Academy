/* Задача 1 .  Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. Използвайте следния
елемент на динамичния списък: */
#include <stdio.h>
#include "list.h"

t_node *start;

int main()
{
    int i;
    init();
    add(1);
    for (i = 5; i < 50; i += 5)
        if (0 != add(i))
            break;
    printList();

    addAfter(100, 25);
    addPrev(400, 35);
    addEnd(600);
    printList();

    int x;
    dellFirst(&x);
    printList();
    t_node *current = dellElemReturnAfter(&x, 15);
    printList();
    printAfter(current);
    printCurrent(current);

    dellEnd(&x);
    printList();

    dellList();
    printList();

    return 0;
}
