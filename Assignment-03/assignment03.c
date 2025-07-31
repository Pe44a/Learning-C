#include <stdio.h>


char firstName[20];
char lastName[20];




int main() {

    printf("Please enter your first name \n");
    scanf("%s", firstName);

    printf("Please enter your last name \n");
    scanf("%s", lastName);

    printf("Welcome %s %s \n", firstName, lastName);
};