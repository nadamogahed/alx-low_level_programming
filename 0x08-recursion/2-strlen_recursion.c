#include "main.h"
/**
 * len - return the length
 * @s: array of chars
 * @n: lenth of array
 * Return: lenth of string
*/
int len(char *s, int n)
{
	if (*s == '\0')
		return (n);

	return (len(s + 1, n + 1));
}
/**
 * _strlen_recursion- len of array
 * @s: array of chars
 * Return: lenth of string
*/
int _strlen_recursion(char *s)
{
	return (len(s, 0));
}
