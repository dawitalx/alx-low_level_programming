#include "main.h"
/**
 * main - returns the program name
 * @argc: no of argument
 * @argv: array of arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *progname;

	progname = argv[0];
	(void)argc;
	while (*progname)
	{
		_putchar(*progname);
		progname++;
	}
	return (0);
}
