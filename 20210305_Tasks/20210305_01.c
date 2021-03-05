/* Задача 1.
За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки. */
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int lbd;
    int sbd;
    int sbr;
    int lbr;
    int scr;
} shelf;

int withdrawStock(shelf *stock, shelf *oneSet)
{
    if ((stock->lbd >= oneSet->lbd) && (stock->sbd >= oneSet->sbd) && (stock->sbr >= oneSet->sbr) && (stock->lbr >= oneSet->lbr) && (stock->scr >= oneSet->scr))
    {
        stock->lbd -= oneSet->lbd;
        stock->sbd -= oneSet->sbd;
        stock->sbr -= oneSet->sbr;
        stock->lbr -= oneSet->lbr;
        stock->scr -= oneSet->scr;
        return (1);
    }
    return (0);
}

shelf *createItem(int lbd, int sbd, int sbr, int lbr, int scr)
{
    shelf *item = malloc(sizeof(shelf));
    item->lbd = lbd;
    item->sbd = sbd;
    item->sbr = sbr;
    item->lbr = lbr;
    item->scr = scr;
    return (item);
}

int main()
{
    shelf *oneShelf = createItem(3, 6, 12, 2, 14);
    shelf *onStock = createItem(66, 110, 182, 44, 210);
    int cnt = 0;

    while (withdrawStock(onStock, oneShelf))
    {
        cnt++;
    }
    printf("Carpenter can produce %d shelfs\n", cnt);
    printf("Left on stock long bords: %d, short bords: %d, small brackets: %d, large brackets: %d, screws: %d\n", onStock->lbd, onStock->sbd, onStock->sbr, onStock->lbr, onStock->scr);
    free(oneShelf);
    free(onStock);
    return 0;
}
