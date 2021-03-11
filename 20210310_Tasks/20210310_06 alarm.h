/* Задача 6 .Използвайте time(0), за да принтирате всяка секунда.
Използвайте alarm(1), за да подадете сигнал за настъпила
секунда signal (SIGALRM,..).
Използвайте setjmp(Env) в main.c, за да определите мястото от
където да излезете.
Използвайте longjmp(Env, 1), за да джъмпнете на това място,
след като е настъпила 8 мата минута.
Функцията void alarm_me(int d) дефинирайте като инлайн в .h, а
я и използвайте в main.c .  */
#include <stdio.h>
#include <setjmp.h>
#include <unistd.h>
#include <time.h>
#include <signal.h>

#define SIGALRM 14

int i = 0;
int j = 0;
long T0 = 0;
jmp_buf Env;

void alarm_me(int d)
{
    long t1sec;
    t1sec = time(0) - T0;
    printf("%d second %s has passed: j = %d. i = % d \n ", t1sec, (t1sec == 1) ? "" : "s", j, i);
    if (t1sec >= 8)
    {
        printf("Giving up\n");
        longjmp(Env, 1);
    }
    exit(1);
    signal(SIGALRM, alarm_me);
}
