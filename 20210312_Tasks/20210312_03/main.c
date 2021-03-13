/* Задача 3 .  Направете едносвързан списък, съдържащ числата 1
до 14 и принтирайте петия елемент от края му. */
#include <stdio.h>
#include "list.h"

t_node *start;

int main()
{
    int i;
    init();
    for (i = 14; i > 0; i--)
        if (0 != add(i))
            break;
    printList();

    printNthElementFromTail(start, 5);
    dellList();

    return 0;
}
