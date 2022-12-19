#include "main.h"

/**
 * print_rev - prints the string in reverse order.
 * @s: character to be printed.
 */

void print_rev(char *s)
{
	int size = 0;
	while (*s != '\0')
	{
		s++;
		size++;
	}
	if (*s == '\0')
	{
		while (size--)
		{
			_putchar(*s);
			s--;
		}
		_putchar(*s);
	}
	

}
