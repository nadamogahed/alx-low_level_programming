#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Description: This function uses a union
 * to check the endianness of the system.
 * A union allows to store different
 * data types in the same memory location.
 * It creates a union with an integer and
 * a character array of size 4, and then it sets the integer to 1.
 * If the most significant byte of the integer
 * is 1, then the system is big endian.
 * If the least significant byte of the integer
 * is 1, then the system is little endian.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	union
	{
		unsigned int i;
		char c[sizeof(int)];
	} bint = {1};
	return (bint.c[0]);
}
