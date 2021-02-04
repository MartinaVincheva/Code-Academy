/*Задача 12 напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)*/
#include <stdio.h>  
#include <string.h> 

int main (void){    
   char s1 [11]="0507080901";
   char s2 [11]="1234";
   char *is2;

   is2 = strpbrk (s1, s2);

   if ( is2 == NULL)
      printf ("There is no matched symbol.\n");
   else
      printf ("Matched symbol is on position: %d .\n",is2-s1+1);
   return 0;
}