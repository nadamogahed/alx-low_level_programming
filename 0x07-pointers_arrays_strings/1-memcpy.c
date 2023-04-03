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
	while (n + 1)
	{
		dest[n] = src[n];
		n--;
	}

	return (dest);
}
