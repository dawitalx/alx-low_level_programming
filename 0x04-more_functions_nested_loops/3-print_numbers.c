#include "main.h"

/**
 * print_numbers - print 0 to 9 followd by new line.
 *
 * Return: Void
 */
int print_numbers(void)
{
	int a = '0';
	int check = '9';
	while(check--)
	{
		_putchar(a);
		_putchar('\n');
		a++;
	}
}
