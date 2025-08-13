#include <stdio.h>

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int number_of_elements = sizeof(array)/sizeof(array[0]);

    printf("The array has %i elements\n", number_of_elements);
}