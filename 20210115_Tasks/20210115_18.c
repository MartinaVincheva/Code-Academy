#include<stdio.h>

static char Caravana = 3;
static char Camper = 3;
static const float RentPriceCaravana = 90.00 ;
static const float RentPriceCamper = 100.00 ;
static float sum = 0.0;

char processUserInput()
{
	unsigned int rez ;
	char choice;

	printf("If you want Caravana , press 1 . \n");
	printf("If you want Camper , press 2 .\n");

	scanf("%d", &rez);
	printf("User selected %d\n", rez);
	
	if (1 == rez)
	{
		if (Caravana >= 1) {
			// Caravana
			sum += RentPriceCaravana;
			Caravana--;
		}
		else
		{
			printf("Out of caravannas, please consider taking camper.\n");
		}
	}
	else
	{
		if (2 == rez)
		{
			if (Camper >= 1) {
				// Camper
				sum += RentPriceCamper;
				Camper--;
			}
			else
			{
				printf("Out of campers, please consider taking caravanna.\n");
			}
		}
	}
	printf("Temporary bill %f\n", sum);
	printf("Do you need more products? (y/n)?");
	scanf("%c", &choice);
	printf("\n");
	
	return(choice);
}

int main ()
{
	do {} while ('y' == processUserInput());
	printf("Total bill %f\n", sum);
	
	return 0;
}