#include <stdio.h>
/**
 * main - entry point
 * Description: prints all possible different combinations of two digits.
 * Return: 0 if success
*/
int main(void)
{
	int i;
	int x;

	for (i = 48; i < 57; i++)
	{
		for (x = i + 1; x <= 57; x++)
		{
			if (i != x)
			{
				putchar(i);
				putchar(x);
			}
			else
			{
				continue;
			}
			if (i == 56)
			{
				continue;
			}
			putchar(',');
			putchar(' ')
		}
	}
	putchar('\n');
	return (0);
}
