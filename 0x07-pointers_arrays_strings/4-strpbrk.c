#include "main.h"

/**
 * _strpbrk - search string for any set of bytes
 * @s: string to be searched
 * @accept: word search
 * Return: s pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *f;
	int findex = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f[findex] = s[i];
				findex++;
			}
		}
	}

	return (f);
}
