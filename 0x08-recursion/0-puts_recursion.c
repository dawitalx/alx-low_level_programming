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
	while (*s != EOF)
	{
		_putchar(*s);
		s++;
	}
	}
	else
	{
		_putchar('\n');
	}
}
