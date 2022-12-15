#include "main.h"

/**
 * _isdigit - cheks for digits.
 * @c: intiger 
 * Return: 1 if it is adigit other wise 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
