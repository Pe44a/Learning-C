#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_flips = 0;
int heads = 0;
int tails = 0;

int main(){
    printf("Enter numbers o coin flips: ");
    scanf("%i", &coin_flips);
    srand(time(NULL));

    for (int i = 0; i < coin_flips; i++){
        int random = rand() % 100 + 1;
        if(random <= 50){ heads+=1;}
        if(random > 50) { tails+=1;}
    }
    
    printf("After flipping the coin %i times, the results were \n %i  heads \n %i tails \n",coin_flips, heads, tails);
}