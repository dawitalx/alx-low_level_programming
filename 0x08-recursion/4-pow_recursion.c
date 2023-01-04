#include "main.h"

/**
 * _pow_recursion - eturn the value x powered by y
 * @x: intiger to be calculated
 * @y: intiger to be powered
 * Return: power of x and y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (0);
	}

	return (x + _pow_recursion(x, y - 1));
}
