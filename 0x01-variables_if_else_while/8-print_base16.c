#include <stdio.h>
/**
 * main - prints the alphabet
 * Description: prints the alphabet in lowercase.
 * Return: 0 if success
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
