#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tempName[1000];
char tempLastName[1000];



int main() {

    printf("Please enter your first name \n");
    scanf("%s", tempName);

    char* firstName =  malloc(strlen(tempName) + 1);
    strcpy(firstName, tempName);

    printf("Please enter your last name \n");
    scanf("%s", tempLastName);

    char* lastName =  malloc(strlen(tempLastName) + 1);
    strcpy(lastName, tempLastName);
    
    

    printf("Welcome %s %s \n", firstName, lastName);

    free(firstName);
    free(lastName);
};