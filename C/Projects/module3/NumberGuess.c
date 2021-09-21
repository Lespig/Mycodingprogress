#include <stdio.h>
#include <stdlib.h>

int main () {

    int secretNumber = 5;
    int guess;
    int tries = 0;
    int maxtries = 3;
    int gameover = 0;

    while(guess != secretNumber && gameover == 0) {
        if(tries < maxtries) {
            printf("Enter a number: ");
            scanf("%d", &guess);
            if (guess != secretNumber) {
                printf("Try Again! \n");
                tries++;
                int triesleft = 3 - tries;
                printf("You have %d tries left \n", triesleft);
            }
        }

        else {
            gameover = 1;
        }
    }
    if(gameover == 1) {
        printf("Out of guesses \n");
    }

    else {
        printf ("You Win! \n");
    }

    return 0;
}