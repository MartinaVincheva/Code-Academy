/*Задача 8. Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори)”*/
#include <stdio.h>

#define MY_CONCAT(x, y) x##y

int main(void)
{
    int MY_CONCAT(a, b);
    ab = 4;
    printf(" int ab = %d\n", ab);
    MY_CONCAT(print, f)
    ("Check text\n");
    return 0;
}