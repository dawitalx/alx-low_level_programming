#include "main.h"
/**
 * sqr_root - find root
 * @n: number
 * @root: testing no
 * Return: root
 */

int sqr_root(int n, int root)
{
	if (root <=  1)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}
	return sqr_root(n, root - 1);
}
/**
 * _sqrt_recursion - find square root
 * @n: intiger
 * Return: sqr root
 */

int _sqrt_recursion(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return sqr_root(n, n);
}
