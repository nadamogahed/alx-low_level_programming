#include "main.h"
/**
 * rev_string -  prints a string, in reverse
 * @s: array of chars
 * Return: no return value
*/
void rev_string(char *s)
{
	int x;
	int i = 0;
	int len = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (x = len; x != i; x--)
	{
		if (s[x] == '\0')
			continue;
		tmp = s[i];
		s[i] = s[x];
		s[x] = tmp;
		i++;
	}
	_putchar('\n');
}

