#include "main.h"
/**
 * print_alphabet - prints the alphabet
 * Description: prints the alphabet in lowercase.
 * Return: 0 if success
*/
void print_alphabet_x10(void)
{
	int i;
	int c;

	for (i = 0; c <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
