#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc.
 * @b: the size to malloc
 * Return:a pointer or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
