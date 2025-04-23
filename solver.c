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
	char equation[128];
	printf("y = ");
	fgets(equation, 64, stdin);

	/**
	 * Remove spaces
	 */
	char tempEquation[128];
	int i;
	int j = 0;
	for (i = 0; i < strlen(equation); ++i)
	{
		if (equation[i] != ' ')
		{
			tempEquation[j] = equation[i];
			++j;
		}
	}
	strcpy(equation, tempEquation);

	printf("%s", equation);
	printf("%i", nextParenthesis(equation));

	return 0;
}

