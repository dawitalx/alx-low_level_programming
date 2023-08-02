#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Return x the power of y
 * @x: the base intiger
 * @y: y number of time x to be multiplied
 * Return: the power of x of y
 */

int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	result = x * _pow_recursion(x, (y - 1));

	return (result);
}
