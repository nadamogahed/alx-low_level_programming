#include "main.h"
/**
 * _strlen - prints triangle
 * @s: array of chars
 * Return: lenth of string
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

