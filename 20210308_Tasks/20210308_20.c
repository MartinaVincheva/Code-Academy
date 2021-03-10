/* Задача 20. Движението по дълга улица на “Експрес Такси” е организирано, така че
има спирка на всеки километър. “Експрес Такси” се движи по улицата от всяка спирка
1,2,3... или 10 километра без спиране. За всеки от десетте разстояния цените са
дадени в таблица, например:
1 12
2 21
3 31
4 40
5 49
6 58
7 69
8 79
9 90
10 101
Пътник иска да пътува n (1<=n<=100) километра. Какви разстояния на пътуване трябва
да избере, така че пътуването да му излезе най-евтино, и каква е цената на цялото
пътуване? Напишете програма, която да реши проблема.
Входни данни: В първия ред от входния файл INPUT3.TXT са записани 10 цели числа,
които са цените за пътуване, съответно на 1,2,3... ,10 километра, а във втория ред е
записано само числото n.
Изходни данни: Всеки ред без последния от изходния файл OUTPUT3.TXT трябва да
съдържа две числа - дължината на маршрута и цената на билета. Цената на цялото
пътуване трябва да се запише на последния ред от изходния файл.
Примерен вход
INPUT3.TXT
12 21 31 40 49 58 69 79 90 101
15
Примерен изход
OUTPUT3.TXT
3 31
6 58
6 58
147 
*/
#include <stdio.h>

int main()
{
    FILE *fptIn = NULL;
    FILE *fptOut = NULL;
    fptIn = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\INPUT3.txt", "rt");
    fptOut = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\OUTPUT3.txt", "w");
    int input[11] = {0};
    float pricePerKm = 0;
    int km, distance, price = 0, cheapestP = 0;

    if (fptIn == NULL && fptOut == NULL)
    {
        printf("Failed to open file.\n");
    }
    else
    {
        int i = 0;
        while (fscanf(fptIn, "%d,", &km) != EOF)
        {
            input[i] = km;
            i++;
        }
    }
    pricePerKm = (float)input[0] / 1;
    for (int i = 1; i < 10; i++)
    {
        if (pricePerKm > (float)input[i] / (i + 1))
        {
            pricePerKm = (float)input[i] / (i + 1);
            cheapestP = i;
        }
    }

    distance = input[10];
    cheapestP += 1;

    while (distance >= cheapestP)
    {
        fprintf(fptOut, "%d\n", distance);
        fprintf(fptOut, "%d %d\n", cheapestP, input[cheapestP - 1]);
        price += input[cheapestP - 1];
        distance -= cheapestP;
    }
    fprintf(fptOut, "%d %d\n", distance, input[distance - 1]);
    price += input[distance - 1];
    fprintf(fptOut, "Total price :%d\n", price);
    fclose(fptIn);

    return 0;
}