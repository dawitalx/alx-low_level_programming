#include "main.h"

/**
 * _strlen_recursion - return the length of string
 * @s: string to be measured
 */

int _strlen_recursion(char *s)
{
	int sum = 0;
	if (*s == '\0')
	{
		return (sum);
	}
	s++;
	sum++;
	_strlen_recursion(s);
	return sum;
}
