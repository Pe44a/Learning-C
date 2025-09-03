#include <stdio.h>

struct employee{   
    char firstName[20];
    char lastName[20];
    int ID;
    int SSN;
    char title[20];
};

struct members{
    struct employee e[2];
}group;

int main(){
    for (int i = 0; i < 2; i++) {
        int count = i+1;
        printf("Employee nr.%i\n", count);

        printf("First name: ");
        scanf("%s", group.e[i].firstName);
        printf("Last name: ");
        scanf("%s", group.e[i].lastName);
        printf("ID: ");
        scanf("%i", &group.e[i].ID);
        printf("SSN: ");
        scanf("%i", &group.e[i].SSN);
        printf("Title: ");
        scanf("%s", group.e[i].title);
    }
    printf("-----------------------------\n");
    for (int i = 0; i < 2; i++) {
        int count = i+1;
        printf("#Data about employee nr.%i\n", count);

        printf("First name: %s\n", group.e[i].firstName);
        printf("Last name: %s\n", group.e[i].lastName);
        printf("ID: %i\n", group.e[i].ID);
        printf("SSN: %i\n", group.e[i].SSN);
        printf("Title: %s\n", group.e[i].title);
    }
    return 0;
    
}