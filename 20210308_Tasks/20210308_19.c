/* Задача 19. Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fpt = NULL;

    if (argc < 2)
    {
        printf("\nUsage:\n > %s file19.txt\n", argv[0]);
    }
    else
    {
        fpt = fopen(argv[1], "r");
    }

    if (fpt != NULL)
    {
        char c;

        while (1)
        {
            c = fgetc(fpt);
            printf("%c", c);

            if (feof(fpt))
                break;
        }
    }

    fclose(fpt);
    fpt = NULL;
    return 0;
}