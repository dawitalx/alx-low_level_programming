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
	int *ptr = malloc(sizeof(int)*2*b);

	if (ptr == NULL)
	{
		printf("98\n");
	}

	printf("%p\n",ptr);
}
