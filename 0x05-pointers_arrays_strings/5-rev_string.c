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
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

