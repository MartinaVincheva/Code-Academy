#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("test.txt", "wt");
    if (NULL != fp)
    {
        fwrite("Test message", 1, strlen("Test message"), fp);
        fclose(fp);
    }
    return (0);
}