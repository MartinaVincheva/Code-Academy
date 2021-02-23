/*Задача 1. Дефиниране и инициализация на обединение*/
#include <stdio.h>

union tagMyData
{
    int m_nValue;
    float m_fValue;
    char m_szText[24];
};
int main()
{
    union tagMyData data = {13};
    union tagMyData data1 = {'A'};
    union tagMyData data2;
    data2.m_fValue = 3.05;
    printf("Memory size : sizeof(data) : %d\n", sizeof(data));
    printf("nValue: %d, fValue: %.2f, Text: %s\n", data.m_nValue, data2.m_fValue, data1.m_szText);
    return 0;
}