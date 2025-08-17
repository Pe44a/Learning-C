#include <stdio.h>

int main() {
    char loop_condition = 'Y';
    int temp_score;
    float average_score;
    int loop_count = 0;
    float sum = 0;

    while (loop_condition=='Y' && loop_count < 8)
    {
        printf("Enter a test score: ");
        scanf("%i",&temp_score);
        sum += temp_score;
        loop_count++;

        printf("Would you like to continue?Y/N: ");
        scanf(" %c",&loop_condition);
    }
    
    average_score = (sum/loop_count);
    printf("%.2f is average score\n", average_score);
}