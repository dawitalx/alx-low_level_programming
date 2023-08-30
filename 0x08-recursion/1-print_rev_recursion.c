#include "main.h"
/**
 * _print_rev_recursion - print reverse
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	
	s++;
	_print_rev_recursion(s);
	_putchar(*s);
}
