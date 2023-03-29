#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: input size for triangle
 * Description: prints triangle.
 * Return: no return function
*/
void print_triangle(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for ((x = size - i); x > 0; x--)
				_putchar(' ');
			for (x = 0; x < i; x++)
				_putchar('#');
			if (i == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}

