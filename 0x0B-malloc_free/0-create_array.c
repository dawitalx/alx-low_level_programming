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
	int count = 0;

	if (array == NULL || size == 0)
		return (NULL);
	while (*array)
	{
		*array = c;
		array++;
		count++;
	}
	array = array - count;
	return (array);
}
