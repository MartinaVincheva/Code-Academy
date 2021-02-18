/*Задача10. Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 до 1000 е просто.
Просто число е се нарича всяко естествено число , по-голямо от 1 ,
което има точно два естествени делителя - 1 и самото себе си.
Например 5 е просто, защото се дели единствено на 1 и 5, докато 6 не
е, защото се дели освен на 1 и 6, и на 2 и 3. */
#include <stdio.h>
#include <stdlib.h>

#define arrSize 1000

int main()
{
    unsigned int i, j;
    int primeNumbers[arrSize];

    for (i = 2; i < arrSize; i++)
        primeNumbers[i] = 1;

    for (i = 2; i < arrSize; i++)
    {
        if (primeNumbers[i])
        {
            for (j = i; i * j < arrSize; j++)
                primeNumbers[i * j] = 0;
        }
    }
    printf("\nPrime numbers from 1 to 1000 are: \n");
    for (i = 2; i < arrSize; i++)
    {
        if (primeNumbers[i])
            printf("%d\n", i);
    }
    return 0;
}