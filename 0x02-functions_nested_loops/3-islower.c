#include "main.h"

/**
 * _islower - checks for lowe case character.
 *
 * Return: 1 for lowercase otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
