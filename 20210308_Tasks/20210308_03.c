/* Задача 3. Създайте test1.txt файл в избрана от вас директория. Сложете някакви
данни в него на латиница - име, поздрав, брой. Отворете за четене.
Използвайте fgetc() , която взема само един char от файла. Направете
while цикъл, за да изпишете всички символи, проверявайте за край на
файл с EOF. Проверявайте дали файловият пойнтер не е NULL, ако е
NULL, изпишете грешка.*/
#include <stdio.h>

int main()
{
    FILE *fpt;
    int c;
    fpt = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\New_file.txt", "rt");
    if (fpt == NULL)
    {
        perror("Failed to open");
        return (-1);
    }
    while ((c = fgetc(fpt)) != EOF)
    {
        printf("%c", c);
    }
    printf("\n");
    fclose(fpt);
    fpt = NULL;

    return 0;
}