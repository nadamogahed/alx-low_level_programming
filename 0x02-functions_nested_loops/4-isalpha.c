#include "main.h"
/**
 * _isalpha - prints the alphabet
 * @c: single letter input.
 * Return: 1 if c is lowercase
*/
int _isalpha(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
