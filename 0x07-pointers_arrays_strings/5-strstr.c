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
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i] != needle[j])
			{
				j = 0;
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}

	return (NULL);
}
