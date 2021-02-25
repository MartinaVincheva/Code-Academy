/*Задача 3. Задача 1. Реализирайте условна компилация в зависимост от макрос
DEBUG (дефиниране на макрос през компилатора: gcc DDEBUG)*/
#include <stdio.h>

void debugMsg(const char *pszMsg)
{
#ifdef DEBUG
    printf("Debug: %s\n", pszMsg);
#endif
}
int main(void)
{
    debugMsg("Text Text");
    return 0;
}