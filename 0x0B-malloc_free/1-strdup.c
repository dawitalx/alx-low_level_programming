#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer
 * @str: the source string
 * Return: returns a pointer
 */
char *_strdup(char *str)
{
	int strlen = 0;
	int i = 1;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		str++;
		strlen++;
	}

	ptr = (char *)malloc(sizeof(char) * (strlen + 1));

	if (ptr == NULL)
		return (NULL);

	str = str - strlen;

	for (i = 0; i < strlen; i++)
		ptr[i] = str[i];

	ptr[i] = '\0';
	return (ptr);
}
