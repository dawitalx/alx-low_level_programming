#include <stdlib.h>
/**
 * print_name - prints func name
 * @name: name
 * @f: function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
