#include "main.h"
/**
 * swap_int -  swaps the values of two integers
 * @a: first number
 * @b: second number
 * Return: no return function
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

