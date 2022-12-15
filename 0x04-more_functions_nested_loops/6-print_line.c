#include "main.h"

/**
 * print_line - draw strait line in the terminal.
 * @n: intiger to be checked
 */

void print_line(int n)
{
	while (n--)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		_putchar('\n');
	}
}
