#include "main.h"

/**
 * more_numbers - print 1 to 14 ten times.
 */

void more_numbers(void)
{
	char i;
	char j;
	for (i = '0'; i < '10'; i++)
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
