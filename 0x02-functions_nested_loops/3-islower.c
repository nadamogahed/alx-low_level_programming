#include "main.h"
/**
 * _islower - prints the alphabet
 * @c: single letter input.
 * Return: 1 if c is lowercase
*/
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
