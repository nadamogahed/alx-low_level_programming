#include "main.h"
/**
 * _puts_recursion - prints the alphabet
 * @s: string input
 * Description: prints _put.
 * Return: 0 if success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
