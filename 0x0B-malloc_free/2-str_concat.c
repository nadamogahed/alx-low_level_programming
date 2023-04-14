#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates a two strings
 * @s1: first string
 * @s2: second string
 * Return: new string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int len_s1 = 0, len_s2 = 0, i = 0, j = 0;

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

	new_string = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	while (i < len_s1)
	{
		new_string[i] = s1[i];
		i++;
	}

	while (j < len_s2)
	{
		new_string[i] = s2[j];
		i++;
		j++;
	}

	new_string[i] = '\0';

	return (new_string);
}
