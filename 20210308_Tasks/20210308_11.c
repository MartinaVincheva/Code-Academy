/* Задача 11. Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t.*/
#include <stdio.h>

int main()
{
    FILE *fpt = NULL;
    fpos_t pos;
    fpt = fopen("C:\\Users\\Marti\\codeAcademy\\gitRepo\\Code-Academy\\20210308_Tasks\\test8.txt", "wt");
    fgetpos(fpt, &pos);
    fputs("\nString ", fpt);
    printf("%d\n", pos);
    fclose(fpt);
    return 0;
}