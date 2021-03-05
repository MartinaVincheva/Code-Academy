/* Задача 3.
С увеличаване на надморската височина температурата намалява с
около 0,5ºC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХºC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УºC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.
Изход 1:
Ако атмосферното налягане е нормално и температурата на хижа Вихрен (1950м
н.м.р.) е ... ºC , то температурата на връх Вихрен (2918м н.м.р.) е ... ºC.
Изход 2:
Ако атмосферното налягане е нормално и температурата на връх Вихрен (2918м
н.м.р.) е ... ºC , то температурата на хижа Вихрен (1950м н.м.р.) е ... ºC.
Потребителски типове упражнение. */
#include <stdio.h>

int main()
{
    float tempHutVihren;
    float tempPeakVihren;
    int hightHutVihren = 1950;
    int hightPeakVihren = 2918;
    int choice;

    printf("Welcome!\nIf you want to know what is the temp at Peak Vihren, press 1\nIf you want to know what is the temp at Hut Vihren, press 2\n");
    scanf("%d", &choice);
    if (1 == choice)
    {
        printf("Please enter temp at Hut Vihren:");
        scanf("%f", &tempHutVihren);
        printf("Atmosphere presure is normal and temp at Peak Vihren is %.2f°C and temp at Hut Vihren is %.2f°C\n", tempHutVihren - (hightPeakVihren - hightHutVihren) * 0.005, tempHutVihren);
    }
    else
    {
        printf("Please enter temp at Peak Vihren:");
        scanf("%f", &tempPeakVihren);
        printf("Atmosphere presure is normal and temp at Hut Vihrenis %.2f°C and temp at Peak Vihren  is %.2f°C\n", tempPeakVihren + (hightPeakVihren - hightHutVihren) * 0.005, tempPeakVihren);
    }
    return 0;
}
