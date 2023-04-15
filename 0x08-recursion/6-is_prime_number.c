#include "main.h"
/**
 * prime_helper - checks if the number is prime or not
 * @n: a number
 * @i: checker
 * Return: 1 if prime, 0 if not
*/
int prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i == 1)
		return (1);
	else if ((n % i) == 0)
		return (0);

	return (prime_helper(n, i - 1));
}
/**
 * is_prime_number - checks if the number is prime or not
 * @n: a number
 * Return: 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
	return (prime_helper(n, n / 2));
}
