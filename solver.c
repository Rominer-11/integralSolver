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
	/**
	 * Get input
	 */
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

	char expression[128];
	i = nextParenthesis(equation);
	while (equation[i] != ')')
	{
		i++;
	}
	int startBound = nextParenthesis(equation);
	int endBound = i;

	printf("%s", equation);
	printf("%i", startBound);
	printf("%i", endBound);

	return 0;
}

