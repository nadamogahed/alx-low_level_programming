#include "main.h"
/**
 * print_numbers - check if char is upper or not
 * Return: no return value
*/
void print_numbers(void)
{
	int i, x;

	while (i < 10)
	{
		for (x = 48; x < 58; x++)
		{
			if ((x / 10) > 0)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
