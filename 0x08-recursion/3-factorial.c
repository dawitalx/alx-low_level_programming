#include "main.h"

/**
 * factorial - the factorial of agiven number
 * @n: number to be calculated
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (n);
	}

	return (n * factorial(n - 1));
}
