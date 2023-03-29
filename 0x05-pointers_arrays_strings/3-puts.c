#include "main.h"
/**
 * _puts - print a srting
 * @str: pointer to a string.
 * Return: 1 if c is uppercase
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
