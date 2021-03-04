#include <stdio.h>

int main(void)
{
    char c;
    int i, br = 0, letters = 0, total = 0;

    while ((c = getchar()) != EOF)
    {
        total++;
        if (c < '0' || c > '9')
            continue;
        br++;
    }
    printf("Total symbols are %d\n", total - 1);
    printf("Numbers = %d\n", br);
    letters = (total - 1) - br;
    printf("Letters = %d\n", letters);
    return 0;
}