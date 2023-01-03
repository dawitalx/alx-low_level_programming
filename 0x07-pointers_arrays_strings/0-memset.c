#include "main.h"

/**
 * _memset - fills amemory with constant byte
 * @s: pointer to be addreced
 * @b: byte to be filled
 * n: intiger to be checked
 * Return: s new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int num = n;
	int i;

	if(n > 0)
	{
		for(i = 0; i < num; i++)
		{
			s[i] = b;
		}
	}

	return (s);
}
