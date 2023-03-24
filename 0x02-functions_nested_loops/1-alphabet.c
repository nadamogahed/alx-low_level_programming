#include "main.h"
/**
 * print_alphabet - prints the alphabet
 * Description: prints the alphabet in lowercase.
 * Return: 0 if success
*/
void print_alphabet(void)
{
    int c;

    for (c = 'a'; c <= 'z'; c++)
    {
	    _putchar(c);
    }
    _putchar('\n');
}
