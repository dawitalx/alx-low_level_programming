#include "main.h"

/**
 * count_bits_to_change - Count the number of bits that need to be changed
 * to convert one number to another.
 * @first_number: The first number.
 * @second_number: The second number.
 *
 * This function calculates the number of bits that need to be changed in
 * the binary representation of the first_number to convert it to the
 * binary representation of the second_number.
 *
 * Return: The number of bits to change.
 */
unsigned int count_bits_to_change(unsigned long int first_number, unsigned long int second_number)
{
	int bit_position, change_count = 0;
	unsigned long int current_bit, exclusive_or_result;

	exclusive_or_result = first_number ^ second_number;

	for (bit_position = 63; bit_position >= 0; bit_position--)
	{
		current_bit = exclusive_or_result >> bit_position;
		if (current_bit & 1)
			change_count++;
	}

	return (change_count);
}
