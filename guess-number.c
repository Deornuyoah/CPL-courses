//
// Created by Deorn on 2023/9/16.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int high = 100;
    int chance = 7;
    /*
     * print the rule
     */
    printf("The computer will generate a random number between 1 and %d\n"
           "You have %d chances\n",high,chance);

    /*
     * generate a random number
     */
    srand(time(NULL)); //use current time as seed for random generator
    int secret = rand() % high + 1;
//    I can not understand %
    while (chance > 0) {
        /*
         * input the guess number
         */
        printf("Enter you guess.\n");

        /*
         * store the guess number
         * compare it with the secret
         * and inform the player of the result
         */
        int guess;
        scanf("%d", &guess);

        /*
         * loop:repeat until the player wins or loses
         */
        if (guess == secret) {
            printf("You Win!\n");
            break;
        } else if (guess > secret) {
            printf("guess > secret\n");
        } else {
            printf("guess < secret\n");
        }
        chance--;
        //chance = chance - 1;
    }
    return 0;
}