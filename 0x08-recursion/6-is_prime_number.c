#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - check if the number is prime or not
 * @n: number to be checked
 * Return: 1 if prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n > 0)
	{
		n = n / is_prime_number(n / 2);
		if (n == 1)
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
