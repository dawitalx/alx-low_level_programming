#include "main.h"

/**
 * jack_bauer - prints every minute of the day.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	while (a <= 2)
	{
		_putchar(a);
		_putchar(b);
		_putchar(':');
		_putchar(c);
		_putchar(d);
		a++;
		while (b <= 3)
		{
			_putchar(a);
		       	_putchar(b);
			_putchar(':');
			_putchar(c);
			_putchar(d);
			b++;
			while (c <= 5)
			{
				_putchar(a);
				_putchar(b);
				_putchar(':');
				_putchar(c);
				_putchar(d);
				c++;
				while (d <= 9)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					d++;
				}
			}
		}
	}
}
