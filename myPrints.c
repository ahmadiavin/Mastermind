#include <stdio.h>
#include "my_mastermind.h"

void userPrompt(int round, int attempts)
{   
    printf("Please enter a valid guess\n");
    printf("Will you find the secret code?\n");
    printf("You have %d attempts remaining\n", attempts);
    printf("---------\n");
    printf("Round %d\n", round);
}

void rounds(int round)
{
    printf("---------\n");
    printf("Round %d\n", round);
}

void secretCode(struct inputValidation *options)
{
    if (options->c == false)
    {
        printf("Your secret code was --> %d <--\nTry again!\n",
               options->randomCode);
    }
    else
    {
        printf("Your secret code was --> %s <--\nTry again!!\n",
               options->userCode);
    }
}