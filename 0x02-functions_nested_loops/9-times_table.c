#include "main.h"
/**
 * times_table - prints times table
 * Description: prints the times table.
 * Return: no return function
*/
void times_table(void)
{
	int i;
	int x;
	int sum;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (x = 1; x < 10; x++)
		{
			sum = (i * x);
			if ((sum / 10) > 0)
			{
				_putchar((sum / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((sum % 10) + '0');

			if (x < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
