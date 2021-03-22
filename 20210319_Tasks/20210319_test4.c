/*Упражнение 5.4. Представяне на числа с плаваща запетая*/
#include <stdio.h>

void print_bits(int nValue)
{
    if (nValue > 1)
        print_bits(nValue / 2);
    printf("%d", nValue % 2);
}
void print_zeros(int nValue)
{
    int i;
    for (i = 0; i < 7; i++)
    {
        if (0x80 & (nValue << i))
            break;
        printf("%d", 0);
    }
}
void print_bytes(const char *pcVal, unsigned uSize)
{
    unsigned i;
    for (i = 0; i < uSize; i++)
    {
        print_zeros((int)(pcVal[i] & 0xFF));
        print_bits((int)(pcVal[i] & 0xFF));
    }
}

int main()
{
    int i;
    float arrFloat[] = {0, 1, -1, 2, 0.5, 0.125, 1234.5678};

    for (i = 0; i < sizeof(arrFloat) / sizeof(float); i++)
    {
        float fValue = arrFloat[i];
        print_bytes((const char *)&fValue, sizeof(fValue));
        printf(" = %f\n", fValue);
    }

    double arrDouble[] = {0, 1, -1, 2, 0.5, 0.125, 1234.5678};

    for (i = 0; i < sizeof(arrDouble) / sizeof(double); i++)
    {
        double dfValue = arrDouble[i];
        print_bytes((const char *)&dfValue, sizeof(dfValue));
        printf(" = %f\n", dfValue);
    }

    return 0;
}