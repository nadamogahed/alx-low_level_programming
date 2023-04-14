#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy an array of chars
 * @str: array to copy from
 * Return: copy of array or NULL
 */
char *_strdup(char *str)
{
	char *new_array;
	int len = 0, i = 0;
	char *tmp = str;

	while (*tmp)
	{
		len++;
		tmp++;
	}

	new_array = malloc(len * sizeof(char));

	if (new_array == NULL)
	{
		return (NULL);
	}

	for (i = 0;  i < len; i++)
	{
		new_array[i] = str[i];
	}

	return (new_array);
}
