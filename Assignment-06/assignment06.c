#include <stdio.h>
int numerator;
int denominator;

int main() {
    printf("Enter numerator \n");
    scanf("%i",&numerator);

    printf("Enter denominator \n");
    scanf("%i",&denominator);

    int remainder = numerator % denominator;

    char *answer = (remainder>0) ? "There is a remainder \n" : "There is not a remainder\n";

    printf("%s", answer);
};