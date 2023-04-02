#include "main.h"
/**
 * puts_half -  prints half of string
 * @str: input string
 * Return: no return function
*/
void puts_half(char *str)
{
	int i, n;
	int len = 0;

	while (str[n] != '\0')
	{
		len++;
	}

	if ((len % 2) != 0)
	{
		n = (len - 1) / 2;
		for (i = n; i < len; i--)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = len / 2;
                for (i = n; i < len; i--)
                {
                        _putchar(str[i]);
                }
	}
	_putchar('\n');
}
