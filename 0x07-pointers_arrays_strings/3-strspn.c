#include "main.h"
#include <stdio.h>

/**
 * _strspn - look for a string set of bytes
 * @s: char string array
 * @accept: char array based on to check bytes
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	int checker;
	int okay;
	int t;

	checker = 0;
	t = 0;

	while (s[checker] != '\0')
	{
		okay = 0;
		while (accept[okay] != '\0')
		{
			if (s[checker] == accept[okay])
			{
				t++;
				break;
			}
			okay++;
		}
		if (accept[okay] == '\0')
			break;
		checker++;
	}
	return (t);
}
