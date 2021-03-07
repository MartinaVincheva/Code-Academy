/* Задача 2
Пощенските такси на дадена куриерска фирма се определят според
тежестта на пратките (с точност до цял грам) и обема, както е показано в таблицата.
Тегло (с точност до 1 грам)
Такса до 20 г 0,46 лева;
21 - 50 г 0,69 лева;
51 - 100 г 1,02 лева;
101 - 200 г 1,75 лева;
201 - 350 г 2,13 лева;
351 - 500 г 2,44 лева;
501 - 1000 г 3,20 лева;
1001 - 2000 г 4,27 лева;
2001 - 3000 г 5,03 лева;
Обем: до 10см + 0,01лв;
10 - 50 см + 0,11 лева,
50 - 100 см + 0,22лв,
100 - 150см + 0,33лв,
150 - 250см +0,56лв,
250 -  400см+1.50лв,
400 - 500см+3,11лв,
500 - 600см+4,89лв,
над 600см+ 5.79лв,
Потребителя се пита за броя на пратките пратки след което теглото на всяка пратка и обема и.
Определете според пощенските такси в тази куриерска фирма как по евтино да изпрати своите
пратки като една или да ги изпрати като отделни пратки.
Изход 1:
За пратки с тегло ... грама обем ... и ... грама ...обем е по
добре да бъдат изпратени заедно. В този случай изпращането ще струва ... лева.
Изход 2:
За пратки с тегло ... грама обем ... и ... грама ...обем е по
добре да бъдат изпратени отделно. В този случай изпращането ще струва ... лева.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float weight;
    float volume;
} parcel;

parcel *ClientsParcels(int *count)
{
    int i;
    parcel *parcels;

    printf("How many parcels you want to send?\n");
    scanf("%d", count);
    parcels = malloc(*count * sizeof(parcel));
    for (i = 0; i < *count; i++)
    {
        printf("Please enter information for the %d parcel:\n", i + 1);
        printf("Enter weight of the parcel:");
        scanf("%f", &parcels[i].weight);
        printf("Enter volume of the parcel:");
        scanf("%f", &parcels[i].volume);
    }
    return (parcels);
}

float getPriceForWeight(float totalWeight)
{
    if (totalWeight <= 20)
    {
        return 0.46;
    }
    else if (totalWeight <= 50)
    {
        return 0.69;
    }
    else if (totalWeight <= 100)
    {
        return 1.02;
    }
    else if (totalWeight <= 200)
    {
        return 1.75;
    }
    else if (totalWeight <= 350)
    {
        return 2.13;
    }
    else if (totalWeight <= 500)
    {
        return 2.44;
    }
    else if (totalWeight <= 1000)
    {
        return 3.20;
    }
    else if (totalWeight <= 2000)
    {
        return 4.27;
    }
    else if (totalWeight <= 3000)
    {
        return 5.03;
    }
    else
    {
        return 10.00;
    }
}

float getPriceForVolume(float totalVolume)
{
    if (totalVolume <= 10)
    {
        return (0.01);
    }
    else if (totalVolume <= 50)
    {
        return (0.11);
    }
    else if (totalVolume <= 100)
    {
        return (0.22);
    }
    else if (totalVolume <= 150)
    {
        return (0.33);
    }
    else if (totalVolume <= 250)
    {
        return (0.56);
    }
    else if (totalVolume <= 400)
    {
        return (1.50);
    }
    else if (totalVolume <= 500)
    {
        return (3.11);
    }
    else if (totalVolume <= 600)
    {
        return (4.89);
    }
    else
    {
        return (5.79);
    }
}

void sum_w_v(parcel *parcels, int count)
{
    float totalWeight = 0, weightPrice = 0;
    float totalVolume = 0, volumePrice = 0;
    float sumOneByOneWeight = 0, sumOneByOneVolume = 0;
    float total = 0;
    int confirmation;

    for (int i = 0; i < count; i++)
    {
        totalWeight += parcels[i].weight;
        totalVolume += parcels[i].volume;
        sumOneByOneWeight = parcels[i].weight;
        sumOneByOneVolume = parcels[i].volume;
        total += getPriceForWeight(sumOneByOneWeight) + getPriceForVolume(sumOneByOneVolume);
    }
    weightPrice = getPriceForWeight(totalWeight);
    volumePrice = weightPrice + getPriceForVolume(totalVolume);

    printf("Total Weight of all packages is: %f grams,\nTotal Volume of all packages is: %f cm.\n", totalWeight, totalVolume);
    if (volumePrice < total)
    {
        printf("It is cheaper to send all your parcels united in one pack. It will cost you in total %f leva\n", volumePrice);
        printf("Please press '1' if you are agree , and '2' if you are not:\n");
        scanf("%d", &confirmation);
        if (1 == confirmation)
        {
            printf("Thank you! Your parcels will be send as one at total price of %f leva\n", volumePrice);
        }
        else
        {
            printf("Ok, than your parcels will be send one by one at price of %f leva\n", total);
        }
    }
    else
    {
        printf("It is cheaper to send all your parcels one by one.It will cost you in total %f leva\n", total);
        printf("Please press '1' if you are agree , and '2' if you are not:\n");
        scanf("%d", &confirmation);
        if (1 == confirmation)
        {
            printf("Thank you! Your parcels will be send one by one at total price of %f leva\n", total);
        }
        else
        {
            printf("Ok, than your parcels will be send as one at price of %f leva\n", volumePrice);
        }
    }
}

int main()
{
    parcel *parcels;
    int parcelsCount = 0;

    printf("Welcome to SPEEDY COURIER!\n");
    parcels = ClientsParcels(&parcelsCount);
    sum_w_v(parcels, parcelsCount);
    free(parcels);
    return 0;
}
