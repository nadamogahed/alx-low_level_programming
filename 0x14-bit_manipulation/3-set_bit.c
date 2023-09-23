#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: the index of the bit to set, starting from 0
 *
 * Description: This function uses bitwise operations
 * to set the value of a bit at a given index.
 * It creates a mask with a 1 at the specified index
 * and then performs an OR operation with the number.
 * This sets the bit at the specified index to 1,
 * regardless of its previous value.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);
	*n |= (1UL << index);
	return (1);
}
