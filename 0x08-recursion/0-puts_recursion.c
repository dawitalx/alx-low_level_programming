#include "main.h"

/**
 * _puts_recursion - prints astring
 * @s: character to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
