#include <stdio.h>
#include "main.h"

/**
 * check - checks to see if number is prime
 * @a:int
 * @b:int
 * Return:int
 */
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - check if the number is prime or not
 * @n: number to be checked
 * Return: 1 if prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
