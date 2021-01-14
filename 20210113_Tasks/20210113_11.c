# include<stdio.h>

int main ()
{
	char Tomatoes ;
	char Flour;
	char Milk;
	char Icecream;
	char Candies;
	char Lollipos;
	float PriceTomatoes1kg = 4.50 ;
	float PriceFlour1kg = 1.80 ;
	float PriceMilk = 0.50 ;
	float PriceIcecream = 0.60 ;
	float PriceCandies = 1.50 ;
	float PriceLollipops = 0.15 ;
	
	
	printf("Hello, welcome to our store!Today we offer - fresh tomatoes,flour,milk,icecream and candies. \n");

	printf("How many kg of tomatoes will you want ? \n");
	float fTomatoesWeight ;
	scanf("%f", &fTomatoesWeight);
	printf("%f\n", fTomatoesWeight);
	float fTomatoTotal = fTomatoesWeight*PriceTomatoes1kg;
	printf("%f\n", fTomatoTotal);

	return 0;
}
