#include "my_mastermind.h"

int userAttempts(struct inputValidation *options)
{
    if (options->t == true)
    {
        return options->attempts;
    }
    else
    {
        return 10;
    }
}

int userInputValidation(int ac, char **av, struct inputValidation *options)
{
    int i = 1;
    options->c = false;
    options->t = false;
    options->userCode = 0;
    options->attempts = 0;
    options->randomCode = randomNumber(1000, 7777);

    if (ac > 1 && ac < 6)
    {
        if (myStrcmp(av[i], "-c") != 0 && myStrcmp(av[i], "-t") != 0)
        {
            return -1;
        }
        while (i < ac)
        {
            if (myStrcmp(av[i], "-c") == 0 && av[i + 1] != NULL)
            {
                options->c = true;
                if (validGuess(av[i + 1]) == true)
                {
                    options->userCode = av[i + 1];
                }
                else
                {
                    return -1;
                }
            }
            if (myStrcmp(av[i], "-t") == 0 && av[i + 1] != NULL)
            {
                options->t = true;
                if (atoi(av[i + 1]) > 0)
                {
                    options->attempts = atoi(av[i + 1]);
                }
                else
                {
                    printf("Input a positive number\n");
                    return -1;
                }
            }
            if ((myStrcmp(av[i], "-c") == 0 && av[i + 1] == NULL) ||
                (myStrcmp(av[i], "-t") == 0 && av[i + 1] == NULL))
            {
                return -1;
            }
            i += 1;
        }
        return 0;
    }
    else if (ac == 1)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int checkUserCode(char *userCode, struct inputValidation *options)
{
    int misplaced = 0;
    int wellplaced = 0;
    int i = 0;
    int j = 0;
    char *randomSecretCode = malloc(sizeof(char) * BUFFER_SIZE + 1);

    if (options->c == true)
    {
        randomSecretCode = options->userCode;
    }
    else
    {
        snprintf(randomSecretCode, sizeof(char) * 5, "%d", options->randomCode);
    }
    while (userCode[i] != '\n')
    {
        if (userCode[i] == randomSecretCode[i])
        {
            wellplaced += 1;
        }
        j = 0;
        while (randomSecretCode[j] != '\0')
        {
            if (i != j && userCode[i] == randomSecretCode[j])
            {
                misplaced += 1;
            }
            j += 1;
        }
        i += 1;
    }
    if (wellplaced == 4)
    {
        printf("Congratz! You did it!\n");
        return EXIT_SUCCESS;
    }
    else
    {
        printf("Well placed pieces: %d\n", wellplaced);
        printf("Misplaced pieces: %d\n", misplaced);
        return EXIT_FAILURE;
    }
}
