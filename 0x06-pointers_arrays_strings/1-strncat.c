#include "main.h"
/**
 * _strncat - concatnate two strings
 * @dest: input first string
 * @src: input second string
 * @n: input for when to stop
 * Return: string
*/
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
