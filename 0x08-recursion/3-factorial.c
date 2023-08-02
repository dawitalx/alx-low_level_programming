#include <stdio.h>
#include "main.h"

/**
 * factorial - Returns the factorial
 * @n: intiger to be factorialized
 * Return: the factorial of n
 */

int factorial(int n)
{
	int fact = 1;

	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		fact = n * factorial(n - 1);
	}
	else
	{
		fact = -1 * n * factorial(n + 1);
	}

	return (fact);
}
