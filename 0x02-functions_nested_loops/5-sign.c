#include "main.h"
/**
 * print_sign - prints the alphabet
 * @c: single number input.
 * Return: 0 if n is zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if	(n == 0)
	{
		return (0);
	}
	else (n < -1)
	{
		return (-1);
	}
}
