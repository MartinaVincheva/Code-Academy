#include "test.h"

node_t *first = NULL;
node_t *last = NULL;

int main()
{
    int a = 1;

    while (a)
    {
        printf("Enter a digit:\n");
        scanf("%d", &a);
        write(a);
    }
    while (read(&a))
    {
        printf("%d, ", a);
    }
    printf("\n");

    return 0;
}