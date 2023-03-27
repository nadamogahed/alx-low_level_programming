#include "main.h"
/**
 * print_times_table - prints times table
 * @n: input to prints n times table.
 * Return: no return function
*/
void print_times_table(int n)
{
	int i, x, sum;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (x = 1; x <= n; x++)
			{
				sum = (i * x);
				_putchar(',');
				_putchar('.');
				if (sum < 10)
				{
					_putchar('.');
					_putchar('.');
				}
				else if (sum > 9 && sum < 100)
				{
					_putchar('.');
					_putchar((sum / 10) + '0');
				}
				else if (sum > 99)
				{
					_putchar((sum / 100) + '0');
					_putchar((sum / 10) % 10 + '0');
				}
				_putchar((sum % 10) + '0');
			}
			putchar('\n');
		}
	}
}
