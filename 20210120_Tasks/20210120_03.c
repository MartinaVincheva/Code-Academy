#include <stdio.h>

int main(void) {
    int choises = 0 ;

    while(choises != 4) {

        printf("Dear customer,\n Press 1 to see message Hello\n Press 2 to see Poem\n Press 3 to see hidden mesage\n Press 4 for exit\n");
        scanf("%d", &choises);

        switch(choises) {
            case 1:
                printf("Hello\n");
                break;
            case 2:
                printf("Mary had a little lamb,\n Its fleece was white as snow;\n And everywhere that Mary went\n The lamb was sure to go.\n");
                break;
            case 3:
                printf("42\n");
                break;
            case 4:
                printf("You exit from the program\n");
                break;
            default:
                printf("Press 1,2,3 or 4\n");
                break;
        }
    }
    return 0;   
}