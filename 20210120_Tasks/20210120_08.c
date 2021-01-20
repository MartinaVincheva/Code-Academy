#include <stdio.h>

int main(void) {
    unsigned Numb = 0;

    for (;;) {
        printf("Number %d\n", ++ Numb);
        if(Numb == 48)
            break;
    }
    return 0;
}