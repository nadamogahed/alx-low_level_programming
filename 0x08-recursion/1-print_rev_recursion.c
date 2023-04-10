#include "main.h"
/**
 * _print_rev_recursion - prints reverse array
 * @s: string input
 * Description: prints _put.
 * Return: 0 if success
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
