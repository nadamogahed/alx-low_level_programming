#include "main.h"
/**
 * _strcpy - copies one string to another
 * @dest: output copied string
 * @src: input string
 * Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int i, n = 0;

	while (src[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return dest;
}
