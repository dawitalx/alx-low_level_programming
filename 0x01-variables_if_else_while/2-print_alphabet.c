#include <stdlib.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
char a = 'a';
while (a < 'z')
{
	putchar(a);
	a++;
}
putchar(a + '\n');
return (0);
}
