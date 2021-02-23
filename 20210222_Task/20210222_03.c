/*Задача 3. Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.
struct name
{
int variable1;
char variable2[128];
float variable3;
}
struct name newvariable; /дефинираме нова променлива/
newvariable.varable1 = 50;
strcpy (newvariable.varable2 , “chocolate”);
newvariable.varable3 = 2.50;*/
#include <stdio.h>
#include <string.h>

struct shopItem
{
    int pieces;
    char product[128];
    float price;
};
int main()
{
    struct shopItem Item1 = {50, "Chocolate", 2.50};
    struct shopItem Item2 = {10, "Cake", 1.85};
    struct shopItem Item3;
    Item3.pieces = 108;
    strcpy(Item3.product, "Coca-Cola");
    Item3.price = 2.10;

    printf("    @ My shop @\n");
    printf("Product 1 : %s at price : %.2f EUR available on stock: %d pcs.\n", Item1.product, Item1.price, Item1.pieces);
    printf("Product 2 : %s at price : %.2f EUR available on stock: %d pcs.\n", Item2.product, Item2.price, Item2.pieces);
    printf("Product 3 : %s at price : %.2f EUR available on stock: %d pcs.\n", Item3.product, Item3.price, Item3.pieces);
    return 0;
}