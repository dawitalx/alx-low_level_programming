#include "main.h"

/**
 * print_rev - prints the string in reverse order.
 * @s: character to be printed.
 */

void print_rev(char *s)
{
	int size = 0;
	char *first = s;
	while (*s != '\0')
	{
		s++;
		size++;
	}
	if (*first != '\0')
	{
		first+=size;
		while (*first != *s)
		{
			_putchar(*first);
			first--;
		}
	}
	

}
