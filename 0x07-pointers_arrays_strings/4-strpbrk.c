#include "main.h"

/**
 * _strpbrk - Search a string some set of bytes
 * @s: is a string
 * @accept: string basis
 * Return: pointer to the byte in `s` that matches or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int fstep, midstep;
	char *pointer;

	fstep = 0;

	while (s[fstep] != '\0')
	{
		midstep = 0;
		while (accept[midstep] != '\0')
		{
			if (accept[midstep] == s[fstep])
			{
				pointer = &s[fstep];
				return (pointer);
			}
			midstep++;
		}
		fstep++;
	}

	return (0);
}
