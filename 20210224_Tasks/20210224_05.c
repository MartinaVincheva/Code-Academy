/*Задача 5.  Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG не е
дефиниран, не печата нищо.*/
#include <stdio.h>
#include "myheader.h"
#include "myheader.h"
#include "myheader.h"
#include "myheader.h"

#ifdef DEBUG
#define DEBUGMSG(msg) printf("DEBUG: %s\n", (msg))
#else
#define DEBUGMSG(msg)
#endif

int main(void)
{
    myfunc(5);
    DEBUGMSG("Text Text");
    return 0;
}
