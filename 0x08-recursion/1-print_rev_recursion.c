#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print in reverse order
 * @s: string to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}

}
