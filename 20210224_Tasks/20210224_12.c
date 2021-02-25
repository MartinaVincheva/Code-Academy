/*Задача 12.Напишете макро GENERIC_MAX(type)
,което трябва да се експандне до следната функция:
int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
}
*/
#include <stdio.h>

#define GENERIC_MAX(type) \
    type type##_max(type x, type y) { return x > y ? x : y; }

GENERIC_MAX(int)
GENERIC_MAX(float)
GENERIC_MAX(char)

int main(void)
{
    printf("int_max 245, 236 = %d\n", int_max(245, 236));
    printf("float_max 23.0, 13.0 = %f\n", float_max(23.0, 13.0));
    printf("char_max 2, 3 = %d\n", char_max(2, 3));
    return 0;
}
