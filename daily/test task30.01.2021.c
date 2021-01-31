#include <stdio.h>

int checkUPC12(char *str);

int main(void) {
    char valid_code1[13] = "013800151735";
    char valid_code2[13] = "725272730706";
    char valid_code3[13] = "012345678912";
    char invalid_code[13] = "012345678919";

    checkUPC12(valid_code1);
    checkUPC12(valid_code2);
    checkUPC12(valid_code3);
    checkUPC12(invalid_code);
	return 0;
}

int sumOdd(char *str) {
    int i, ret = 0;

    for (i = 0; i < 6; i++) {
        ret += str[i * 2] - '0';
    }
    return ret;
}

int sumEven(char *str) {
    int i, ret = 0;

    for (i = 0; i < 5; i++) {
        ret += str[i * 2 + 1] - '0';
    }
    return ret;
}

int checkUPC12(char *str) {
    int sum, control;

    sum = sumOdd(str) * 3 + sumEven(str) - 1;
    control = 9 - sum % 10;
    if (control == (str[11] - '0')) {
        printf("Code %s is valid!\n", str);
    } else {
        printf("Code %s is invalid!\n", str);
    }
}
