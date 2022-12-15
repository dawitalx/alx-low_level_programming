#include "main.h"

/**
 * _isupper - checks for uppercharacter.
 * @c: checks for character
 * Return: 1 if upper case otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
