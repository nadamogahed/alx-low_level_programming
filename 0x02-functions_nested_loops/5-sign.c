#include "main.h"
/**
 * print_sign - prints the alphabet
 * @c: single letter input.
 * Return: 1 if c is lowercase
*/
int print_sign(int n)
{

	if (n > 0)
		return (1);
	else if	(n == 0)
		return (0);
	else (n < -1)
		return (-1);
}
