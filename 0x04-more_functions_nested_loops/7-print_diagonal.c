#include "main.h"
/**
 * print_line - draws a diagonal line
 * @n: input value
 * Return: no return value
*/
void print_diagonal(int n)
{
	int i, x;
	
	if (n > 0)
	{
		for ( i = 0; i < n; i++)
		{
			for ( x = i; x > 0; x--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
