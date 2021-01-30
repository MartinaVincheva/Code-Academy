/*Задача 7. Напишете програма на С, която съдържа 2 функции. 
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на четириъгълник със същите дължини на страните,
като раменете на триъгълника.Напишете прототипите на функциите най-отгоре, а телата им под мейн функцията. */
#include <stdio.h>

float SofTriangle(unsigned int a,unsigned int b);
float SofRectangle(float sOfTriangle);

int main(void) {
    unsigned int a, b;
    float resultTr, resultRec;

	printf("\nPlease enter decimal number for side A :");
    scanf("%d", &a);
    printf("\nPlease enter decimal number for side B :");
    scanf("%d", &b);
    resultTr = SofTriangle(a, b);
    printf("Face of right-angled triangle with side a = %d and b = %d is equal to %f .\n", a,b, resultTr);
    resultRec = SofRectangle(resultTr);
	printf("Face of rectangle with side a = %d and b = %d is equal to %f .\n", a,b, resultRec);
	return 0;
}

float SofTriangle(unsigned int a, unsigned int b) {
	return (float)a * b / 2;
}

float SofRectangle(float sOfTriangle) {
	return sOfTriangle * 2;
}
