#include <stdio.h>
/**
 * main - entry point
 * Description: prints the sum of all the multiples of 3 or 5 below 1024.
 * Return: 0 if success
*/
int main(void)
{
	int i, result;

	while (i < 1024)
	{
		if ((i % 3) == 0)
			result += i;
		else if ((i % 5) == 0)
			result += i;
		i++;
	}
	printf("%d ", result);
	return (0);
}

