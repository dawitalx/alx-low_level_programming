#include "main.h"

int _isalpha(int c)
{
	/*check if character is either A-Z or a-z*/
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
