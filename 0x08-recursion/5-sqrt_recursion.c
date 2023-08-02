#include <stdio.h>
#include "main.h"

/**
 * check - checks for the square root
 * @a:intiger to be checked
 * @b:int to be checked
 * Return: intiger
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - return the squre root of the nuumber
 * @n: the number to be computed
 * Result: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
