#include "main.h"
#include <stdio.h>
/**
 * _puts - function
 * @s: char
 * Return: void
 */

void _puts(char *s)
{
	while (*s != EOF)
	{
		_putchar(*s);
		s++;
	}
}
