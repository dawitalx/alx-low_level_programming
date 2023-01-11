#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - return pointer of newly allocated spacce
 * @str: string to be allocated
 * Return: Null or pointer
 */

char *_strdup(char *str)
{
	char *nstr;
	int size = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (*str)
	{
		size++;
	}

	nstr = malloc(size * sizeof(char));

	if (nstr == NULL)
		return (NULL);

	while ( i < size)
	{
		*(nstr + i) = *(str + i);
		i++;
	}

	return (nstr);
}
