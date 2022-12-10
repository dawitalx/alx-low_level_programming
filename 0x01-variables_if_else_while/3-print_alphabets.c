#include <stdlib.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
char a = 'a';
char aa = 'A';
while (a <= 'z' || aa <= 'Z')
{
	if (a <= 'z')
	{
        	putchar(a);
        	a++;
	}
	else if (aa <= 'Z')
	{
		putchar(aa);
		aa++;
	}
}
putchar('\n');
return (0);
}

