#include "main.h"
/**
 * print_line - draws a straight line
 * @n: input value
 * Return: no return value
*/
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
