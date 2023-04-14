#include "main.h"
/**
 * factorial - factorial of a given number
 * @n: a factorial of a number
 * Return: int
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
