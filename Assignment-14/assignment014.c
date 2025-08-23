#include <stdio.h>

int main() {
    int val = 24;
    int *point = &val;
    printf("%p\n",point);
    return 0;
}