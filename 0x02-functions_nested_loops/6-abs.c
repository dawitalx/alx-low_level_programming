#include "main.h"

/**
 * __abs - computes the absolute value of an integer.
 *@c: character to check`
 * Return: absolute value of c.
 */
int _abs(int c)
{
	if (c < 0)
	{
		return(c*-1);
	}
	else
	{
		return(c);
	}
}
