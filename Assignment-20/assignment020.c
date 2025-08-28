#include <stdio.h>

struct assignment020
{
    int a;
    char b;
    float c;
};


int main(){
    struct assignment020 str;

    str.a = 1;
    str.b = 'b';
    str.c = 1.11;

    printf("Int:%i  Char:%c  Float:%f  ", str.a, str.b, str.c);
    return 0;
} 