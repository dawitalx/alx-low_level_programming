#include "main.h"

/**
 * clear_bit - Clear a specific bit at an index to 0 in a decimal number.
 * @number_ptr: Pointer to the number to modify.
 * @bit_index: The index of the bit to clear to 0.
 *
 * This function clears the bit at the specified index to 0 in the decimal number
 * pointed to by `number_ptr`.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *number_ptr, unsigned int bit_index)
{
	if (bit_index > 63)
		return (-1);

	*number_ptr = (~(1UL << bit_index) & *number_ptr);
	return (1);
}
