#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Description: This function uses bitwise operations
 * to calculate the number of bits you would need to
 * flip to get from one number to another. It does this
 * by performing an XOR operation between the two numbers,
 * which gives a binary number where each bit is 1 if the corresponding
 * bits in the original numbers are different and 0 if they are the same.
 * Then it counts the number of 1s in this binary number,
 * which is the number of bits that need to be flipped.
 *
 * Return: the number of bits you would need
 * to flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
