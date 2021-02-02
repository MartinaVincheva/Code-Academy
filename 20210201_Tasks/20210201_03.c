/*Упражнение 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата. */
#include <stdio.h>
#include <ctype.h>

double atof(char *s){
    double a, power;
    int i = 0, sign = 1;

    if (!isdigit(s[0]) && (s[0] == '-')){
        sign = -1; i++;
    }
    for( a =0.0; isdigit(s[i]); i++) /* Sum the numbers from the string and multiply with 10 */
        a =10.0 * a +(s[i]-'0');
    if(s[i] == '.')
        ++i;
    for(power = 1.0; isdigit(s[i]); i++){ /* Sum the numbers from the string after . and multiply with 10 each time*/
        a =10.0 * a + (s[i]-'0');
        power = power*10; 
    }  
    return a/power * sign;  /*devide by 10 to receive the real number and multuply with the sign*/ 
}

int main(void) {
    char s[] = "-1234 56789";
    printf("String : %s\n", s);
    printf("String with decimal point : %f", atof(s));
    return 0;
}