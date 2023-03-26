#include "main.h"
/**
 * print_to_98 - prints to 98
 * @n: is the input start number
 * Description: prints the numbers from n to 98.
 * Return: no return function
*/
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n + '0');
		n++;
	}
	while (n > 98)
        {
                _putchar(n + '0');
                n--;
        }
}
