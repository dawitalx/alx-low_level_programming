#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of specific size
 * @size: size of array
 * @c: chars
 * Return: pointer oe NULL
 */

char *create_array(unsigned int size, char c)
{
	int len = size;
	int cnum = c;
	if (len == 0)
	{
		return (NULL);
	}
	else if (size > 0)
	{
		return (malloc(sizeof(c) * size));
	}
	else
	{
		return (NULL);
	}
}
