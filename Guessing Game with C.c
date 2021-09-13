#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number,guess,nguess=1;
    srand(time(0));
    number = rand()%100 + 1; //Generates a number between 1 and 100
    //printf("Number is %d\n", number);
    printf("Guess the number between  1 and 100\n");
    //Keep running the loop until the number is guessed
    while(guess!=number){
        printf("Enter number\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n",nguess);
        }
        nguess++;
    }
    return 0;
}