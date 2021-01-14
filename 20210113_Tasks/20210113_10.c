# include<stdio.h>

int main ()
{
	char Caravana = 3;
	char Camper = 3;
	float RentPriceCaravana = 90.00 ;
	float RentPriceCamper = 100.00 ;

	printf("If you want Caravana , press 1 . \n");
	printf("If you want Camper , press 2 .\n");

	unsigned int rez ;
	scanf("%d", &rez);
	printf("User selected %d\n", rez);

	return 0;
}
