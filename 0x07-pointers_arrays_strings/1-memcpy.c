#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: address to be filled
 * @arc: address to be cppied
 * @n: integer to be checked
 * Return: Dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int num = n;

	if (num > 0)
	{
		int i;

		for(i = 0; i < num; i++)
		{
			src[i] = dest[i];
		}
	}
	return (dest);
}
