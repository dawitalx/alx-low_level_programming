#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate acharacter in a string
 * @s: string to be manipulated
 * @c: character to be locaated
 * Return: pointer of c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
		{
			return(s);
		}
		s++;
	}
	return(NULL);
}
