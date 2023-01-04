#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: intiger to be manipulated
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int result = 1;

	if (result * result > n)
		return (-1);

	if (result * result == n)
		return (result);

	return (_sqrt_recursion(n - 1));
}
