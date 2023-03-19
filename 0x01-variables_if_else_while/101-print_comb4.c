#include <stdio.h>
/**
 * main - entry point
 * Description: prints all possible different combinations of three digits.
 * Return: 0 if success
*/
int main(void)
{
	int i;
	int x;

	for (m = 48; m < 56; m++)
	{
		for (i = m + 1; i < 57; i++)
		{
			for (x = i + 1; x <= 57; x++)
			{
				if (m != i && m != x)
				{
					putchar(m);
					putchar(i);
					putchar(x);
				}
				else
				{
					continue;
				}
				if (m == 55)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
