/*Задача 6. Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ”*/
#include <stdio.h>

#define MY_PRINT(...) printf("TRACE:" __VA_ARGS__)
int main(void)
{
    MY_PRINT("My favourite combination is: %d, %c, %d, %c.\n", 1, 'A', 2, 'B');
    return 0;
}