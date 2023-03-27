#include "main.h"
/**
 * print_times_table - prints times table
 * @n: input to print n times
 * Return: no return function
*/
void print_times_table(int n)
{
	int i, x, sum;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (x = 0; x <= n; x++)
			{
				sum = (i * x);
				if (sum > 9 && sum < 99)
					_putchar((sum / 10) + '0');
				else if (sum > 99)
				{
					_putchar((sum / 100) + '0');
					_putchar((sum / 10) % 10 + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((sum % 10) + '0');
				if (x < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
