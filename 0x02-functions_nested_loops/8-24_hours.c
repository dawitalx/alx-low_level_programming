#include "main.h"

/**
 * jack_bauer - prints every minute of the day.
 *
 * Return: void
 */
void jack_bauer(void)
{
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '0';
	while (d <= '9')
	{
		_putchar(a);
		_putchar(b);
		_putchar(':');
		_putchar(c);
		_putchar(d);
		a++;
		_putchar('\n');
		while (c <= '5')
		{
			_putchar(a);
		       	_putchar(b);
			_putchar(':');
			_putchar(c);
			_putchar(d);
			b++;
			_putchar('\n');
			while (b <= '3')
			{
				_putchar(a);
				_putchar(b);
				_putchar(':');
				_putchar(c);
				_putchar(d);
				c++;
				_putchar('\n');
				while (a <= '2')
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					d++;
					_putchar('\n');
				}
			}
		}
	}
}
