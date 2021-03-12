/* Задача 4 .Пренапишете
Задача 2 от 05.03.2021г за Пощенските такси на дадена
куриерска фирма се определят според тежестта на пратките (с точност до цял грам) и обема,
както е показано в таблицата.
При влизане в някоя функция отваряте файл за писане и при успешно излизане от функцията
записвате във файла function_name() success . Това го правим за всички функции. Ако има
някаква грешка записваме грешката във файла и името на функцията.  */
#include <stdio.h>
#include <stdlib.h>

#define TRACE_NAME __FILE__ ".log"
FILE *traceFile = NULL;

typedef struct
{
    float weight;
    float volume;
} parcel;

void fnTraceBegin(const char *fname)
{
    printf(TRACE_NAME);
    if (NULL == traceFile)
    {
        traceFile = fopen(TRACE_NAME, "w+");
    }
    fprintf(traceFile, "\"%s\" function begin\n", fname);
}

void fnTraceSuccess(const char *fname)
{
    if (NULL != traceFile)
    {
        fprintf(traceFile, "\"%s\" function success\n", fname);
    }
}

void fnTraceError(const char *fname)
{
    if (NULL == traceFile)
    {
        fprintf(traceFile, "\"%s\" function error\n", fname);
    }
}

void fnTraceEnd(void)
{
    fprintf(traceFile, "Check end!\n");
    fclose(traceFile);
}

parcel *ClientsParcels(int *count)
{
    fnTraceBegin(__func__);
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
    fnTraceSuccess(__func__);
    fnTraceError(__func__);
    return (parcels);
}

float getPriceForWeight(float totalWeight)
{
    fnTraceBegin(__func__);
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
    fnTraceSuccess(__func__);
    fnTraceError(__func__);
}

float getPriceForVolume(float totalVolume)
{
    fnTraceBegin(__func__);
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
    fnTraceSuccess(__func__);
    fnTraceError(__func__);
}

void sum_w_v(parcel *parcels, int count)
{
    fnTraceBegin(__func__);
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
    fnTraceSuccess(__func__);
    fnTraceError(__func__);
}

int main()
{
    fnTraceBegin(__func__);
    parcel *parcels;
    int parcelsCount = 0;

    printf("Welcome to SPEEDY COURIER!\n");
    parcels = ClientsParcels(&parcelsCount);
    sum_w_v(parcels, parcelsCount);
    free(parcels);
    fnTraceSuccess(__func__);
    fnTraceError(__func__);
    fnTraceEnd();
    return 0;
}