#include <stdio.h>
#include <math.h>

float A;
float B;
float C;
int main() {
    printf("Input A \n");
    scanf("%f", &A);

    printf("Input B \n");
    scanf("%f", &B);

    printf("Input C \n");
    scanf("%f", &C);


    float D = (B*B)-4*(A*C);
    float sqrt_D = sqrt(D);

    float x1 = (-B + sqrt_D)/(2*A);
    float x2 = (-B - sqrt_D)/(2*A);

    printf("%f %f \n", x1, x2);
};