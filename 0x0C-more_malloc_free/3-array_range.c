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
	int size = max - min + 1;
	int i;

	if (min > max)
		return (NULL);

	array_ptr = malloc(size * sizeof(int));

	if (array_ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array_ptr[i] = min + i;

	return (array_ptr);
}
