#include <stdio.h>

struct frogs {
    int amount;
};

int main() {
    struct frogs *ptr;
    struct frogs alot;
    ptr = &alot;

    alot.amount = 9;
    printf("Amount %i\n", alot.amount);

    (*ptr).amount = 30;
    printf("Amount %i\n", (*ptr).amount);

    ptr->amount = 15;
    printf("Amount %i\n", ptr->amount);

}