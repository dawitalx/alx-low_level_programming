#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: string to be counted
 * Return: Number of characters in s
 */

int _strlen_recursion(char *s)
{
	int length;

	if(*s)
	{
		_strlen_recursion(s + 1);
		length++;
	}
	else
	{
		return 0;
	}

	return length;
}
