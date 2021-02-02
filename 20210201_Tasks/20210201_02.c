/*Задача 2. Напишете функцията int atof(char *s), която
преобразува стринг в число с десетична запетая. Тази функция е
подобна на разглежданата по горе atoi(char *s), само че когато се
стигне до . точката, отделяща цялата част от дробната, трябва
да се пусне още един цикъл, който да изчисли числото в
дробната част по същия начин, както е числото в цялата част.
Само че тук при дробната част трябва да имаме една
променлива, която да умножаваме по 10 всеки път до края на
дробната част power *= 10; Накрая трябва да разделим
полученото число на тази променлива, за да получим реалното
число с плаващата заперая на точното място. */
#include <stdio.h>
#include <ctype.h>

double atof(char *s){
    double a, power;
    int i = 0;

    for( a = 0.0; isdigit(s[i]); i++) /* Sum the numbers from the string and multiply with 10 */
        a = 10.0 * a +(s[i]-'0');
    if(s[i] == '.')
        i++;
    for(power = 1.0; isdigit(s[i]); i++){ /* Sum the numbers from the string after . and multiply with 10 each time*/
        a = 10.0 * a + (s[i]-'0');
        power = power*10; 
    }  
    return a/power; /*devide by 10 to receive the real number*/ 
}

int main(void) {
    char s[] = "-123456789";

    printf("%f", atof(s));
    return 0;
}