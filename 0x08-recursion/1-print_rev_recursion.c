#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print in reverse order
 * @s: string to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int length;

	if (*s)
	{
		while (*s != EOF)
		{
			length++;
			s ++;
		}
	
	_putchar(*s);
	_print_rev_recursion(s - 1);
	}
	else
	{
		_putchar('\n');
	}

}
