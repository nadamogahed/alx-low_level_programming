#include "main.h"
/**
 * print_array -  print array of integers
 * @a: array of integers
 * @n: iput index
 * Return: no return function
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
