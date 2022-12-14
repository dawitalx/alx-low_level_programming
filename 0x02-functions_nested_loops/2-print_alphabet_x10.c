#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int count = 1;
	while (count <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);

			a++;
		}
		_putchar('\n');
		a = 'a';
		count++;
	}
}
