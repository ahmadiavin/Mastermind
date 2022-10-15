#include "my_mastermind.h"

bool validNum(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 48 && str[i] <= 55)
        {
            i += 1;
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool validGuess(char *guess)
{
    if (myStrlen(guess) == BUFFER_SIZE)
    {
        if (validNum(guess) == false)
        {
            return false;
        }
    }
    else
    {
        return false;
    }
    return true;
}

bool validNumInput(char *str)
{
    int i = 0;
    while (str[i] != '\n')
    {
        if (str[i] >= 48 && str[i] <= 55)
        {
            i += 1;
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool validInput(char *guess)
{
    if (myStrlen(guess) == BUFFER_SIZE + 1)
    {
        if (validNumInput(guess) == false)
        {
            return false;
        }
    }
    else
    {
        return false;
    }
    return true;
}