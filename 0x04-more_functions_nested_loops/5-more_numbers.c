#include "main.h"
/**
 * more_numbers - check if char is upper or not
 * Return: no return value
*/
void more_numbers(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if ((x / 10) > 0)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		_putchar(10);
	}
}
