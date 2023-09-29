#include "main.h"

/**
 * set_bit - Set a specific bit at an index to 1 in a decimal number.
 * @number_ptr: Pointer to the number to modify.
 * @bit_index: The index of the bit to set to 1.
 * Return: 1 for success, -1 for failure.
 */
int set_bit(unsigned long int *number_ptr, unsigned int bit_index)
{
	if (bit_index > 63)
		return (-1);

	*number_ptr = ((1UL << bit_index) | *number_ptr);
	return (1);
}
