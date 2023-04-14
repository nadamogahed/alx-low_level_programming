#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates a two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of chars to add
 * Return: new string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len_s1 = 0, len_s2 = 0, i = 0, j = 0;

	if (s1 != NULL)
	{
		while (s1[len_s1])
			len_s1++;
	}

	if (s2 != NULL)
	{
		while (s2[len_s2])
			len_s2++;
	}

	if (n >= len_s2)
		n = len_s2;

	new_str = malloc(len_s1 + n + 1);

	if (new_str == NULL)
		return (NULL);

	while (i < len_s1)
	{
		new_str[i] = s1[i];
		i++;
	}

	while (j < n)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}

	new_str[i] = '\0';

	return (new_str);
}
