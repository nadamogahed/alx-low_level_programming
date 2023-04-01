#include "main.h"
/**
 * cap_string - capitalize one letter after Separators of words.
 * @s: input string to convert
 * Return: s.
*/
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (s[i - 1] == 32 ||
					s[i - 1] == 9 ||
					s[i - 1] == 10 ||
					s[i - 1] == 44 ||
					s[i - 1] == 59 ||
					s[i - 1] == 46 ||
					s[i - 1] == 33 ||
					s[i - 1] == 63 ||
					s[i - 1] == 34 ||
					s[i - 1] == 40 ||
					s[i - 1] == 41 ||
					s[i - 1] == 123 ||
					s[i - 1] == 125)
				s[i] -= 32;
		}
	}
	return (s);
}
