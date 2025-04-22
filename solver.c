/**
 * Todo...
 * 1. Figure out how to input equations
 */

#include <stdio.h>
#include <string.h>

/**
 * Finds the position of the parenthesis that starts the next expression to be evaluated according to PEMDAS
 */
int nextParenthesis(char * equation)
{
	int i = 0;
	while (equation[i] != ')' && i < strlen(equation))
	{
		++i;
	}
	while (equation[i] != '(' && i >= 0)
	{
		--i;
	}
	return i;
}

int main()
{
	int x, i;
	char equation[128];

	printf("y = ");
	fgets(equation, 64, stdin);

	printf("%i", nextParenthesis(equation));

	return 0;
}

