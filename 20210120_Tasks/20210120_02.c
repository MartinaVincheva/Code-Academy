#include <stdio.h>

int main(void) {
    unsigned int choises = 0;

    printf("Dear customer,\n Press 1 to see message Hello\n Press 2 to see Poem \n Press 3 to see Hidden mesage.\n");
    scanf("%d", &choises);

    switch(choises) {
        case 1:
            printf("Hello\n");
            break;
        case 2:
            printf("Mary had a little lamb,\n Its fleece was white as snow;\n And everywhere that Mary went \n The lamb was sure to go.\n");
            break;
        case 3:
            printf("42\n");
            break;
        default:
            printf("You sellect wrong input.\n");
            break;
    }
    return 0;   
}