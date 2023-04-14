#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - create array
 * @min: starter number
 * @max: end number
 * Return: pointer ot NULL
 */
int *array_range(int min, int max)
{
	int *array_ptr;
	int i = 0, size = max - min + 1;

	if (min > max)
		return (NULL);

	array_ptr = malloc(size * sizeof(int));

	while (min <= max)
	{
		array_ptr[i] = min;
		i++;
		min++;
	}

	return (array_ptr);
}
