#include <stdio.h>
#include "main.h"

/**
 * void _puts_recursion(char *s) - prints character given
 * @s: character to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
