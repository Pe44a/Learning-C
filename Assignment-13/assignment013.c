#include <stdio.h>

int main() {
    const int games = 2;
    const int players = 3;
    int scores[players][games];

    for (int i = 0; i < games; i++)
    {
        printf("Game #%i\n",i+1);
        for (int j = 0; j < players; j++)
        {
            printf("Enter scoring total for Player #%i:",j + 1);
            scanf("%i",&scores[j][i]);
        }
    }
    
    int best_player = 0; 
    int best_score = 0;
    for (int i = 0; i < players; i++)
    {   
        int sum = 0;
        for (int j = 0; j < games; j++)
        {
            sum += scores[i][j];
        }

        if(best_score < sum){
            best_score = sum;
            best_player = i + 1; 
        }
    }
    int avg_highest_score = best_score/games;

    printf("Player #%i had the highest scoring average at %i points per game.\n", best_player, avg_highest_score);
    return 0;
}