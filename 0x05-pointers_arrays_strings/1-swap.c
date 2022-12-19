#include "main.h"

/**
 * swap_int - swap the value of two intigers.
 * @a: intiger to be swaped.
 * @b: intiger to be swaped.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
