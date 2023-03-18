#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - get the last number
 * Description: print the last digit of the number stored in the variable n.
 * Return: 0 if success
*/
int main(void)
{
	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_num = n % 10;
	if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_num);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	}
	return (0);
}
