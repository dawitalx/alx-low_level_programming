#include "main.h"
#define NULL 0

/**
 * _strst - find the first occurance of substring
 * @haystack: string to be searched
 * @needle: string to be checked
 * Return: pointer of needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}

	return (NULL);
}
