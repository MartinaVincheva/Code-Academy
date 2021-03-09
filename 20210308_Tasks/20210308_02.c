/* Задача 2. Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("file.txt", "a+");
    if (NULL == fp)
    {
        printf("Failed to open file.txt.\n");
    }
    else
    {
        fprintf(fp, "%s %s %s %d", "We", "are", "in", 2021);
        fclose(fp);
    }

    if (0 == rename("file.txt", "New_file.txt"))
    {
        printf("File is renamed\n");
    }
    else
    {
        printf("File is not renamed\n");
    }
    remove("file.txt");
    return (0);
}
