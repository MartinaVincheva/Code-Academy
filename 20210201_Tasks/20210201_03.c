/*Упражнение 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата. */
#include <stdio.h>
#include <ctype.h>

double atof(char *s){
    double a, power;
    int i , sign;
    
    if (!isdigit(s[0]) && (s[0] == '-')){
        sign = -1; i++;
    }
    for( a =0.0; isdigit(s[i]); i++) 
        a =10.0 * a +(s[i]-'0');
    if(s[i] == '.')
        ++i;
    for(power = 1.0; isdigit(s[i]); i++){ 
        a =10.0 * a + (s[i]-'0');
        power = power*10; 
    }  
    return a/power * sign;  
}

int main(void) {
    char s[] = "-123456789";
    printf("String : %s\n", s);
    printf("String with decimal point : %f", atof(s));
    return 0;
}