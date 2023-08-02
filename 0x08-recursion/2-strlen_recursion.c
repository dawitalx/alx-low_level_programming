#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: string to be counted
 * Return: Number of characters in s
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if(*s)
	{
		_strlen_recursion(s + 1);
		length++;
		return length - 1;
	}
	else
	{
		return 0;
	}
}
