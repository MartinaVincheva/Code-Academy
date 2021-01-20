#include <stdio.h>

int main(void) {
    unsigned int choises = 0 ;

    printf("Dear customer,\n Press 1 to see message Hello\n Press 2 to see Poem \n Press 3 to see Hidden mesage. \n");
    scanf("%d", &choises);
    if (1 == choises) {
        printf("Hello\n");
    } else if (2 == choises) {
        printf("Poem\n");
    } else if (3 == choises) {
        printf("Hiden mesage\n");
    } else {
        printf("You sellect wrong input.\n");
    }
    return 0;   
}