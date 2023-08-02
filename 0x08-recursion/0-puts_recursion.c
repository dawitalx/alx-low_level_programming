#include "main.h"

/**
 * void _puts_recursion(char *s) - prints character given
 * @s: character to be printed
 */

void _puts_recursion(char *s)
{
	while (*s != EOF)
	{
		_putchar(*s);
		s++;
	}
}
