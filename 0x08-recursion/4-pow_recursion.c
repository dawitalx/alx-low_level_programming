#include "main.h"
/**
 * _pow_recursion - get the power of somthing
 * @x: the base no
 * @y: to be powered of x
 * Return: x power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
