#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - return the squre root of the nuumber 
 * @n: the number to be computed
 * Result: the square root of n
 */

int _sqrt_recursion(int n)
{
	int result = 1;
	
	if (n < 0)
	{
		return (-1);
	}

	result = n * n;

	return (result);
}
