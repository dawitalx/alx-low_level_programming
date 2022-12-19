#include "main.h"

/**
 * _puts - prints string followe by new line.
 * @str: string to be printed.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
