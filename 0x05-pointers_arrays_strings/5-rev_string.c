#include "main.h"
/**
 * rev_string -  prints a string, in reverse
 * @s: array of chars
 * Return: no return value
*/
void rev_string(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len; i >= 0; i--)
	{
		if (s[i] == '\0')
			continue;
		_putchar(s[i]);
	}
	_putchar('\n');
}

