#include "main.h"
/**
 * _isupper - check if char is upper or not
 * @c: char input.
 * Return: 1 if c is uppercase
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
