#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be represented in binary
 *
 * Description: This function uses bitwise operations and recursion to print
 * the binary representation of a number. It shifts the bits of the number
 * to the right until there are no more bits to shift, then it prints the
 * least significant bit of the number.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) ? '1' : '0');
}
