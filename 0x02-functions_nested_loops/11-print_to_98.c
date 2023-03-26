#include <stdio.h>
/**
 * print_to_98 - prints to 98
 * @n: is the input start number
 * Description: prints the numbers from n to 98.
 * Return: no return function
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			n++;
			if (n == 99)
				continue;
			printf(", ");
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			n--;
			if (n == 97)
				continue;
			printf(", ");
		}
	}
	printf("\n");
}
