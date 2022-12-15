#include "main.h"

/**
 * print_line - draw strait line in the terminal.
 * @n: intiger to be checked
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n--)
		{
			_putchar('-');
			_putchar('\n');
		}
	}
}
