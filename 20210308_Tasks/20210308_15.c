/* Задача 15. Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред.*/
#include <stdio.h>

int main()
{
    FILE *fpt = NULL;
    long pos, i = 0;

    fpt = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\file14.txt", "r");

    if (fpt != NULL)
    {
        fseek(fpt, 0, SEEK_END);
        pos = ftell(fpt);

        while (i <= pos)
        {
            printf("%c", fgetc(fpt));
            i++;
            fseek(fpt, -i, SEEK_END);
        }
        printf("\n");
    }
    else
    {
        printf("Failed to oper file\n");
    }

    fclose(fpt);
    return 0;
}