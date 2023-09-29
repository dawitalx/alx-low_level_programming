#include "main.h"

/**
 * flip_bits - Count bits to change between two numbers.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int xor_result = n ^ m;

	for (i = 63; i >= 0; i--)
		count += (xor_result >> i) & 1;

	return (count);
}
