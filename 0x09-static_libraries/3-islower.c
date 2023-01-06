#include "main.h"

int _islower(int c)
{
	/*check if value is lowercase*/
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
