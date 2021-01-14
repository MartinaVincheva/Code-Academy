# include<stdio.h>

void print_mid_row(void)
{
	printf ("# # # # # # # # # # # \n");
}

void print_down(void)
{
	printf ("  # # # # # # # # #   \n");
	printf ("    # # # # # # #     \n");
	printf ("      # # # # #       \n");
	printf ("        # # #         \n");
	printf ("          #           \n");
}

void print_up(void)
{
	printf ("          #           \n");
	printf ("        # # #         \n");
	printf ("      # # # # #       \n");
	printf ("    # # # # # # #     \n");
	printf ("  # # # # # # # # #   \n");
	printf ("# # # # # # # # # # # \n");
}

int main ()
{
	print_mid_row();
	print_down();
	printf("\n");
	print_up();
	printf("\n");
	print_up();
	print_down();

	return 0;
}
