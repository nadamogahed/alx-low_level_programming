#include "main.h"
/**
 * _islower - prints the alphabet
 * Description: prints the alphabet in lowercase.
 * Return: 1 if c is lowercase
*/
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
