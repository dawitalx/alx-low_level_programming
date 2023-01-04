#include "main.h"

/**
 * factorial - the factorial of agiven number
 * @n: number to be calculated
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
