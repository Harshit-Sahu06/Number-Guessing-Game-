//Guess the number or Number Guessing Game.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    int number, guess, noofguesses=1;
    srand(time(0));
    number = rand()%100 + 1; //this line generates a random number between 1 and 100.
    //printf("The number is %d\n", number);
    //keep running the loop untill the number is guessed.
    do{
        printf("Guess the number between 1-100:\n ");
        scanf("%d", &guess);
        if(guess>number) {
            printf("Lower number please.\n");
        } 
        else if(guess<number) {
            printf("Higher number please.\n");
        } 
        else{
            printf("You guessed it in %d attempts.\n",noofguesses);
        }
        noofguesses++;
        }while(guess!=number);

return 0;
} 