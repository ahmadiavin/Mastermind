my_mastermind: my_mastermind.c
	gcc -Wall -Wextra -Werror my_mastermind.c my_mastermind.h myBools.c myHelperFunctions.c myPrints.c myValidation.c -o my_mastermind

clean:
	rm -f *.o

fclean: clean
	rm -f my_mastermind