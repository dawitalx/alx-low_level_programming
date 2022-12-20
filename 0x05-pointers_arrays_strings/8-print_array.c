#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of array.
 * @a: array to be printed.
 * @n: number of elements.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[i]);
	printf("\n");
}
