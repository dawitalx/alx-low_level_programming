#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return pointer of string
 * @str: string accepted
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	char *newstr;
	
	while (*str)
	{
		len++;
		str++;
	}
	str = str - len;
	newstr = malloc(len * sizeof(char));

	if (str == NULL || newstr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		newstr[i] = *str;
		str++;
	}
	return (newstr);
}
