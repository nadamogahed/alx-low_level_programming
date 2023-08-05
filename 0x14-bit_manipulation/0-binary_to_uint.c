#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, x, n = 0;
	const char *p = b;

	/* Check if b is NULL */
	if (!b)
		return (0);

	/* Calculate the length of the string */
	while (*p != '\0')
	{
		len++;
		p++;
	}

	/* Convert the binary number to an unsigned int */
	for (x = 0; x < len; x++)
	{
		if (b[x] == '1')
		{
			n = n * 2 + 1;
		}
		else if (b[x] == '0')
		{
			n = n * 2;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}
