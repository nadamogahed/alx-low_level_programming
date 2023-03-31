#include "main.h"
/**
 * _strncpy - concatnate two strings
 * @dest: input first string
 * @src: input second string
 * @n: input for when to stop
 * Return: string
*/
char *__strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
