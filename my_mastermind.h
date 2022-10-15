#ifndef MASTERMIND_H
#define MASTERMIND_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#define BUFFER_SIZE 4

struct inputValidation
{
    bool c;
    bool t;
    char *userCode;
    int attempts;
    int randomCode;
};
int userInputValidation(int ac, char **av, struct inputValidation *options);
int randomNumber(int min, int max);
int myStrlen(char *str);
int myStrcmp(char *str1, char *str2);
bool validGuess(char *guess);
bool validNum(char *str);
bool validInput(char *guess);
bool validNumInput(char *str);
int userAttempts(struct inputValidation *options);
int checkUserCode(char *userCode, struct inputValidation *options);
void userPrompt(int round, int attempts);
void rounds(int round);
void secretCode(struct inputValidation *options);
#endif