/*Задача 11. Ако имеме дефинирано макро
#define М
кои от по долните дефиниции ще пропаднат:
а) #if M
b) #ifdef M
c) #ifndef M
d) #if defined(M)
e) #if !defined(M)
*/
#include <stdio.h>

#define M

#if M /* Ще даде грешка при компилация поради липсваща стойност на М */
#endif
#endif
#ifdef M            /* MY_MACRO ще е дефиниран, защото М е дефинирано */
#define MY_MACRO(a) /* Do something */
#endif
#ifndef M           /* MY_MACRO няма да е дефиниран, защото М е дефинирано */
#define MY_MACRO(a) /* Do something */
#endif
#if defined(M)      /* MY_MACRO ще е дефиниран, защото М е дефинирано */
#define MY_MACRO(a) /* Do something */
#endif
#if !defined(M)     /* MY_MACRO няма да е дефиниран, защото М е дефинирано */
#define MY_MACRO(a) /* Do something */
#endif

int main(void)
{

    return 0;
}
