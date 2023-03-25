#include "main.h"
/**
 * print_last_digit - prints the alphabet
 * @i: prints the last digit.
 * Return: 0 if success
 */
int print_last_digit(int i)
{
	int last_num;

	last_num = i % 10;
	if (last_num < 0)
	{
		last_num *= -1;
	}
	_putchar(last_num);
	return (i);
}
