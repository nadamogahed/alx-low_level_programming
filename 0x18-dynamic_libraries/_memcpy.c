#include "main.h"
/**
 * _memcpy - fills memory with a constant byte.
 * @dest: new array of chars
 * @src: char array to copy from
 * @n: input for when to stop
 * Return: string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
