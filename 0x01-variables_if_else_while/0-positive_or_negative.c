#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - see if the number positive or negative
 * Description: whether n is positive or negative.
 * Return: 0 if success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf(n, "%ld is positive");
	}
	 printf(n, "%ld is negative");
	return (0);
}
