/*Задача 3 . Да се построи наредено двоично дърво за
търсене чрез последователно добавяне на следните
върхове
а) 7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13
б) 12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65
в) 4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81
г) 81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4
д) 28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14
Да се сравнят получените дървета . Какви изводи могат
да се направят*/

#include "tree.h"

#define SIZE 13

treeNode_t *tree = NULL;

int main()
{
    int i;
    int arr[SIZE] = {7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13};

    for (i = 0; i < SIZE; i++)
        insert(arr[i]);

    printf("\nTop is %d\n", tree->data);
    preorder(tree);
    printf("\n");
    deltree(tree);
    tree = NULL;

    int arr1[SIZE] = {12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65};

    for (i = 0; i < SIZE; i++)
        insert(arr1[i]);

    printf("\nTop is %d\n", tree->data);
    preorder(tree);
    printf("\n");
    deltree(tree);
    tree = NULL;

    int arr2[SIZE] = {4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81};

    for (i = 0; i < SIZE; i++)
        insert(arr2[i]);

    printf("\nTop is %d\n", tree->data);
    preorder(tree);
    printf("\n");
    deltree(tree);
    tree = NULL;

    int arr3[SIZE] = {81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4};

    for (i = 0; i < SIZE; i++)
        insert(arr3[i]);

    printf("\nTop is %d\n", tree->data);
    preorder(tree);
    printf("\n");
    deltree(tree);
    tree = NULL;

    int arr4[SIZE] = {28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14};

    for (i = 0; i < SIZE; i++)
        insert(arr4[i]);

    printf("\nTop is %d\n", tree->data);
    preorder(tree);
    printf("\n");
    deltree(tree);
    tree = NULL;

    return 0;
}

/*При едни и същи числа , но с различен връх и различна подредба се получават различни дървета. 
Например подусловие д) е най-балансираното дърво. Подусловия в) е изцяло дясно ориентирано, подгусловие г) е изцяло ляво ориентирано.*/
