#include "main.h"

/**
 * _strspn - get the length of aprifix substring
 * @s: string to be cheked
 * @accept: words to be count
 * Return: number of count
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	
	while (*s != '\n')
	{
		while (*accept != '\n')
		{
			if (*s == *accept)
			{
				count++;
			}
			accept++;
		}
		s++;
	}
	return (count);
}
