#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: array of chars
 * @b: char to replace with
 * @n: input for when to stop
 * Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
}

