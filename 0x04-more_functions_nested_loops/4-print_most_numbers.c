#include "main.h"

/**
 * print_most_numbers - print 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	char i;

	while (i >= '0' && i <= '9')
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		else
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
}
