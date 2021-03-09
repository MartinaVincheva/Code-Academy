/* Задача 4. Прочетете стринг от създадения файл.
char *fgets(char * str, int nchars, FILE *stream)
първият параметър е стринг, вторият параметър е брой символи, който
искаме да прочетем, освен ако не стигне терминиращия символ за край
на реда \n или \0 първо, третият е пойнтер към файла;.*/
#include <stdio.h>
int main()
{
    FILE *fpt;
    char str[60];
    fpt = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\New_file.txt", "rt");
    if (fpt == NULL)
    {
        perror("Failed to open");
        return (-1);
    }
    if (fgets(str, 25, fpt) != NULL)
    {
        printf("%s\n", str);
        printf("%s", str);
    }
    printf("\n");
    fclose(fpt);
    fpt = NULL;

    return 0;
}