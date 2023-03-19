#include <stdio.h>
/**
 * main - prints the alphabet
 * Description: prints the alphabet except q and e.
 * Return: 0 if success
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
