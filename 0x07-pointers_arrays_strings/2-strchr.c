#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: array of chars
 * @c: char to start from
 * Return: string ir null
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			break;
		s++;
	}

	if (*s == c)
		return (s);
	else
		return ("NULL");
}
