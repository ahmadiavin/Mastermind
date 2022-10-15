#include "my_mastermind.h"

int myStrlen(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length += 1;
    }
    return length;
}

int myStrcmp(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
    {
        i += 1;
    }
    return (str1[i] - str2[i]);
}

int randomNumber(int min, int max)
{
    int result = 0;
    int minNumber = 0;
    int maxNumber = 0;

    minNumber = min;
    maxNumber = max + 1;
    srand(time(NULL));
    result = (rand() % (maxNumber - minNumber)) + minNumber;
    return result;
}
