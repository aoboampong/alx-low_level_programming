#include "main.h"
/**
 * cap_string - This code capitalizes all words in a string
 * @s: string to capitalize
 *
 * Return: output of s
*/
char *cap_string(char *s)
{
	int i = 0, d;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (d = 0; d <= 12; d++)
				{
					if (a[d] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
