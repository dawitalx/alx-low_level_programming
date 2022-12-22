#include "main.h"

/**
 * _strcat - concatinates two strings.
 * @dest: character to be concat.
 * @src: character to be concat.
 * Return: concatinated string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
