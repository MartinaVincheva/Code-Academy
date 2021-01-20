#include <stdio.h>
    
int main(void) {
    int nValue = 0;

    printf("Please enter number.\n");
    scanf("%d", &nValue);
    printf("You enter %d.\n", nValue);

    if (nValue < 10) {
        printf("Value is less than 10.\n");
    } else if (nValue < 20) {
        printf("Value is less than 20.\n");
    } else {
        printf("Value is bigger or equal than 20.\n");
    }
    return 0;
}