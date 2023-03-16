#include <stdio.h>
#include <string.h>
/**
* main - function return a void
* Description: prints size of data types
* sizeof: return the size of the data type
* Return: 0 value if there is no error
*/
int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}
