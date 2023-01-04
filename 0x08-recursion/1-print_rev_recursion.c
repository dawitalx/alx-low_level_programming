#include "main.h"

/**
 * _print_rev_recursion - print astring in reverse
 * @s: string to be reversed
 */

void _print_rev_recursion(char *s)
{
	int i = 0;
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
