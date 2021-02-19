#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 3;
    for (i = 1; i < argc; i++)
        printf("%s %d ", argv[i], argc);
    printf("\n");
    return 0;
}