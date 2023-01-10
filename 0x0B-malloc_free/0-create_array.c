#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates array of chars, and initialize
 * @size: size to be checked
 * @c: character to be measured
 * Return: pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *newarray;

	if (size <= 0)
	{
		return (NULL);
	}

	newarray = malloc(size * sizeof(char));

	if (newarray == NULL)
		return (NULL);

	while (i < (int)size)
	{
		*(newarray + i) = c;
		i++;
	}

	*(newarray + i) = '\0';

	return (newarray);
}
