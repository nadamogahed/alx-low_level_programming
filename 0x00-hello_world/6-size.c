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
printf("Size of a char: ", sizeof(char));
printf("Size of a int: ", sizeof(int));
printf("Size of a long int: ", sizeof(long int));
printf("Size of a long long int: ", sizeof(long long int));
printf("Size of a float: ", sizeof(float));
return (0);
}
