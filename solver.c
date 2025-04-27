/**
 * Todo...
 * 1. Figure out how to input equations
 */

#include <stdio.h>
#include <string.h>
#define BUFFERSIZE 128

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

char * nextExpression(char * equation)
{
	char * expression = malloc(BUFFERSIZE);
        i = nextParenthesis(equation);
        while (equation[i] != ')')
        {
                i++;
        }
        int startBound = nextParenthesis(equation);
        int endBound = i;

	return expression;
}

int main()
{
	/**
	 * Get input
	 */
	char equation[BUFFERSIZE];
	printf("y = ");
	fgets(equation, BUFFERSIZE, stdin);

	/**
	 * Remove spaces
	 */
	char tempEquation[BUFFERSIZE];
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
	printf("%i", startBound);
	printf("%i", endBound);

	return 0;
}

