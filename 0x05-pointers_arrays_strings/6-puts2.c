#include "main.h"
/**
 * puts2 -  swaps the values of two integers
 * @str: input string
 * Return: no return function
*/
void puts2(char *str)
{
	int i;

	while (str[len] != '\0')
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
