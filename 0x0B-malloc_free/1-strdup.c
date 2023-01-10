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
	int size;

	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		size++;
		str++;
	}

	nstr = malloc(size * sizeof(char));

	if (nstr == NULL)
		return (NULL);

	return (nstr);
}
