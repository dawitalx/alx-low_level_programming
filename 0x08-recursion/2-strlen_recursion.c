#include "main.h"
/**
 * _strlen_recursion - length of strnig
 * @s: string
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
