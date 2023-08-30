#include "main.h"
/**
 * _strlen_recursion - length of strnig
 * @s: string
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s == '\0')
	{
		return (sum);
	}
	sum++;
	_strlen_recursion(s + 1);

	return (sum);
}
