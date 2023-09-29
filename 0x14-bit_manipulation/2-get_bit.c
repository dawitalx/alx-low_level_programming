#include "main.h"

/**
 * get_bit - Get the value of a bit at a specific index in a decimal number.
 * @decimal_number: The number to retrieve the bit from.
 * @bit_index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index.
 */
int get_bit(unsigned long int decimal_number, unsigned int bit_index)
{
	int bit_value;

	if (bit_index > 63)
		return (-1);

	bit_value = (decimal_number >> bit_index) & 1;

	return (bit_value);
}
