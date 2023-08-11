#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - func allocate memory
 * @b: int
 * Return: print pointer address or 98
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
