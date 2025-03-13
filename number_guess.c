#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int guess = 0;
    srand(time(0)); // seed the time generator
    int ran_num = rand()% 100+1; // generating random number
    printf("welcome to the number guessing game !\n");
    do {
        printf("guess a number between 1 to 100 \n");
        scanf("%d",&guess);
        if(guess<ran_num) {
            printf("the number is too low!");
        }
        else if(guess>ran_num) {
            printf("the number is too high!");
        }
        else {
            printf("congratulations! you guesses it correct.");
        }
    } while(guess!=ran_num);
    return 0;
}
