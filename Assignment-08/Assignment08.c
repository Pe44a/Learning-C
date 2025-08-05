#include <stdio.h>

int rand_number;

int main() {
    printf("Input number between 1 and 500 \n");
    scanf("%i", &rand_number);

    if( rand_number > 0 & rand_number < 101){
        printf("You have number between 1 and 100 \n");
    }
    if( rand_number > 99 & rand_number < 201){
        printf("You have number between 100 and 200 \n");
    }
    if( rand_number > 199 & rand_number < 301){
        printf("You have number between 200 and 300 \n");
    }
    if( rand_number > 299 & rand_number < 401){
        printf("You have number between 300 and 400 \n");
    }
    if( rand_number > 399 & rand_number < 501){
        printf("You have number between 400 and 500 \n");
    }
};