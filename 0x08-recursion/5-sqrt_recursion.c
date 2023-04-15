#include "main.h"
/**
 * _sqrt_helper - help to get natural square root of a number
 * @n: number
 * @i: sqrt number
 * Return: square root
*/
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - natural square root of a number
 * @n: number
 * Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}
