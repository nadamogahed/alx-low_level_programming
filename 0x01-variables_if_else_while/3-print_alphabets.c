#include <stdio.h>
/**
 * main - prints the alphabet
 * Description: alphabet in lowercase, uppercase.
 * Return: 0 if success
*/
int main(void)
{
	int ch;
	int ch1;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch1 = 65; ch1 <= 90; ch1++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
