#include <stdio.h>

unsigned Factorial(unsigned uValue) {
    if (uValue < 2) {
        return 1;
    } else {
        return uValue * Factorial(uValue -1);
    }
}
int main() {
    printf("%d\n", Factorial(3));
}