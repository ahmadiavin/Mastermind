#include "my_mastermind.h"
#include <stdio.h>

int main(int ac, char **av)
{
    struct inputValidation options;
    int validOption = userInputValidation(ac, av, &options);
    int round = 0;
    char userCode[128];
    int attempts;

    if (validOption == 0)
    {
        attempts = userAttempts(&options);
        userPrompt(round, attempts);
        // enter main game loop
        while (1)
        {
            read(0, userCode, sizeof(userCode));
            round += 1;
            if (validInput(userCode) == true)
            {
                if (checkUserCode(userCode, &options) == EXIT_SUCCESS)
                {
                    return EXIT_SUCCESS;
                }
            }
            else
            {
                if (read(0, userCode, sizeof(userCode)) == 0)
                {
                    printf("Read EOF!");
                    // handle EOF
                }
                else
                    printf(
                        "Wrong input!\nPlease enter 4 positive digits between "
                        "0-7\n");
                return EXIT_FAILURE;
            }
            if (round >= attempts)
            {
                printf("Out of attempts\n");
                secretCode(&options);
                return EXIT_SUCCESS;
            }
            rounds(round);
        }
    }
    else  // error message for flag validation
    {
        printf(
            "To specify a secret code use '-c' + 4 digits between 0-7 and to "
            "specify number of attemps use '-t' and a positive number.\nEx: "
            "./my_mastermind -c 1234 -t 5\n");
    }
    return EXIT_SUCCESS;
}