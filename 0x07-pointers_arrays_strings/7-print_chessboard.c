#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; a[j][i] != '\0'; j++)
		{
			_putchar(a[j][i]);
		}
		_putchar('\n');
	}
}
