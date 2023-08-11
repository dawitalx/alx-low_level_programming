#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function concatnate two string
 * @s1: string 1
 * @s2: string 2
 * @n: no of bytes
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0;
	int len2 = 0;
	char *s12;
	int ncheck = 0;

	check_len(s1, s2, &len1, &len2);

	int *s1ptr = malloc(sizeof(char) * len1);
	int *s2ptr = malloc(sizeof(char) * len2);
	int *s12 = malloc(sizeof(char) * (len1 + len2));

	if (s1ptr == NULL || s2ptr == NULL || s112 == Null)
	{
		return (NULL);
	}
	for (int i = 0; i <= len1; i++)
	{
		s12[i] = s1[i];
	}

	for (int i = len1 + 1; i <= (len1 + len2); i++)
	{
		ncheck++;

		if (ncheck <= n)
		{
			s12[i] = s2[i];
		}
		else if (ncheck > len2)
		{
			break;
		}
	}

	return (s12);
}

int check_len(char *s1, char *s2, int *len1, int *len2)
{
	while (s1)
	{
		*len1++;
	}

	while (s2)
	{
		*len2++;
	}

	return (0);
}
