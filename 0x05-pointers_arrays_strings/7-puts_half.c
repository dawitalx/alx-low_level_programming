#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts_half - print half followed by new line.
 * @str: string to be printed.
 */

void puts_half(char *str)
{
	int len = _strlen(*s);
	int i = 0;
	while (i <= len/2 )
	{
		_putchar(*s);
		s++;
		i++;
	}
	_putchar('\n');
}
