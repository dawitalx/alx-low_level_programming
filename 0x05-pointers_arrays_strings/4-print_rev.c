#include "main.h"

/**
 * print_rev - prints the string in reverse order.
 * @s: character to be printed.
 */

void print_rev(char *s)
{
	int size = 0;
	int i;

	while (*s != '\0')
	{
		s++;
		size++;
	}
	s--;

	for (i = size; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');	
}
