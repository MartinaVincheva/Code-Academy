#include <stdio.h>

const float PI = 3.14159;

float areaEclipse(const float PI, float A, float B);

int main()
{
    float A = 1;
    float B = 2;

    printf("Area of Eclipse is %f\n", areaEclipse(PI, A, B));

    return 0;
}
float areaEclipse(const float PI, float A, float B)
{
    return PI * A * B;
}