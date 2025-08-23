#include <stdio.h>

int main(){
    int variable  = 10;
    int *ptr = &variable;


    printf("The value of int variable is: %i\n", variable);
    printf("The value of the pointer to the int variable is: %p\n", (void*)ptr);
    printf("The memory address of the int variable is: %p\n", &variable);
    printf("The value held at the memory location that the pointer is pointing to is: %i\n", *ptr);
}