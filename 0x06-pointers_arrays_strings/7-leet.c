#include "main.h"
/**
 * leet - changes certain letters to numbers.
 * @s: input string to convert
 * Return: s.
*/
char *leet(char *s)
{
	int i = 0;
	int x;

	char letters[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		i++;
		for (x = 0; x <= 7; x++)
		{
			if (s[i] == letters[x] ||
			 s[i] - 32 == letters[x])
				s[i] = x + '0';
		}
	}
	return (s);
}
