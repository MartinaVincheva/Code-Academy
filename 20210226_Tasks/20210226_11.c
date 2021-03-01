/*Задача 11. тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по горе начин.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int a;
    struct node *p_node;
} node_t;

int main()
{
    typedef node_t *p_node;
    p_node p = (p_node)malloc(sizeof(node_t));
    printf("Size of :%d Bytes\n", sizeof(p));

    return 0;
}
