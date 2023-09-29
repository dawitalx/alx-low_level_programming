#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @n: Decimal number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int i, count = 0, c;

	for (i = 63; i >= 0; i--)
	{
		c = n >> i;

		if (c & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
