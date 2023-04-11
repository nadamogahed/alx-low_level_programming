#include "main.h"
/**
 * _isdigit - check if its digit or char
 * @c: input.
 * Return: 1 if c is uppercase
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
