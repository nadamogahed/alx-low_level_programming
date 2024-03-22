#include "main.h"
/**
 * _strspn - locates a character in a string.
 * @s: array of chars
 * @accept: char to start from
 * Return: string ir null
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}

