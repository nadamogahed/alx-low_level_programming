#include "main.h"
/**
 * puts_half -  prints half of string
 * @str: input string
 * Return: no return function
*/
void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = len / 2; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
