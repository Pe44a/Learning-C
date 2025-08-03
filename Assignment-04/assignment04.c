#include <stdio.h>

float radius;

int main() {
    printf("Enter radius of you circle \n");
    scanf("%f", &radius);

    float area = 3.14*(radius*radius);

    printf("Circle radius is %f \n", area);
};