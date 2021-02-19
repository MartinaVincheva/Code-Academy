#include <stdlib.h>

static char static_buffer[100]; /* static memory allocation */
int main()
{
    char auto_buffer[100];                  /* automatic memory
    allocation */
    char *ptr_dynamic_buffer = malloc(100); /*
    dynamic memory allocation */
    free(ptr_dynamic_buffer);
    return 0;
}