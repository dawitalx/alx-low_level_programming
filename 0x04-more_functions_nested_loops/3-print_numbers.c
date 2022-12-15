#include "main.h"

/**
 * print_numbers - print 0 to 9 followd by new line.
 *
 * Return: Void
 */
void print_numbers(void)
{
	int a = 0;
	int check = 10;
	while(check--)
	{
		_putchar(a);
		_putchar('\n');
		a++;
	}
}
