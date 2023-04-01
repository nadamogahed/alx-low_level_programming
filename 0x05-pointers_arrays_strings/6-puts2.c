#include "main.h"
/**
 * puts2 -  swaps the values of two integers
 * @str: input string
 * Return: no return function
*/
void puts2(char *str)
{
	int len, i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
