#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer
 * @str: the source string
 * Return: returns a pointer
 */
char *_strdup(char *str)
{
	int strlen = 0;
	int i = 0;

	while (*str)
	{
		str++;
		strlen++;
	}

	char *ptr = (char *)malloc(sizeof(char) * strlen);

	str = str - strlen;

	for (i = 0; i < strlen; i++)
		ptr[i] = str[i];

	ptr[i] = '\0';
	return (ptr);
}
