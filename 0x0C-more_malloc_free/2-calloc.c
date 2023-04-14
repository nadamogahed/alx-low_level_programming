#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * @nmemb: array
 * @size: size to malloc
 * Return: a pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size = nmemb * size;
	unsigned int i;

	if (total_size == 0)
		return (NULL);

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
	{
		((char *)ptr)[i] = 0;
	}

	return (ptr);
}
