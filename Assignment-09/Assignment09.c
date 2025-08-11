#include <stdio.h>
#include <stdlib.h>

char input[100];
char first[100];
char last[100];

int main() {
    printf("Enter your first and last name like so: Name LastName\n");
    fgets(input,100,stdin);

    int start = 0;
    int end;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if(input[i] == ' ' && start == 0) {
            end = i;
            int k;
            for ( k = 0; k < end; k++)
            {
                first[k] = input[k];
            }
            first[k] = '\0';
            start = end;

            break;
        }
    }

    int j = 0;
    for (int i = start+1; input[i] != '\0'; i++){
        
        last[j] = input[i];
        j++;
    }
    last[j] = '\0';


    if(first[0] == '\0'){
        printf("Too few arguments\n");
        return 0;
    }

    int too_many = 0;
    for (int i = 0; last[i] != '\0'; i++)
    {
        if(last[i] == ' ') {
            too_many = 1;

            break;
        }
    }

    if(too_many == 1){
        printf("Too many arguments\n");
        return 0;
    }


    printf("%s\n", last);
    printf("%s %s\n", first, last);

};