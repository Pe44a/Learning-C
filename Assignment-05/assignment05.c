#include <stdio.h>
    int seconds;

int main() {
    printf("Enter seconds \n");
    scanf("%i", &seconds);

    int hours = (seconds/3600);
    int minutes = (seconds-(hours*3600))/60;
    int remaining_seconds = seconds-(hours*3600)-(minutes*60);

    printf("%i seconds is equal to %i hours, %i minutes, and %i seconds.# \n", seconds, hours, minutes, remaining_seconds);
};