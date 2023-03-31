#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: result
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while (s1[i] != '\0')
	{
		result = s1[i] - s2[i];
		i++;
	}

	return (result);
}
