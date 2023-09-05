#include "main.h"
#include <stdlib.h>
/**
 * create_array - will create an array
 * @size: size of the array
 * @c: char
 * Return: Null or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int count = 0;

	if (array == NULL || size == 0)
		return (NULL);
	for (count = 0; count < size; count++)
	{
		array[count] = c;
	}
	return (array);
}
