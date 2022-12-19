#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of string.
 * @s: characted to be checkd.
 * Return: the number of string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
