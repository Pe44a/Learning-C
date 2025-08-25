#include <stdio.h>
#include <stdlib.h>

int main(){
    char *ptr = NULL;

    ptr = malloc(5*sizeof(char));


    if (ptr == NULL){
        printf("Sad\n");
        return 0;
    }
    if (ptr != NULL){
        free(ptr);
        printf("Success\n");
        return 1;
    }
}