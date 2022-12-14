#include "main.h"

/**
 * print_alphabet - prints 10  alphabet followed by new line
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int count = 0;
	while (count <= 10)
	{
		while (a <='z')
		{
			_putchar(a);
			a++;
		}
		a = 'a';
		count++;
	}
	_putchar('\n');
}
