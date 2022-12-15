#include "main.h"

/**
 * more_numbers - print 1 to 14 ten times.
 */

void more_numbers(void)
{
	for (char i = '0'; i < '10'; i++)
	{
		for (char j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
