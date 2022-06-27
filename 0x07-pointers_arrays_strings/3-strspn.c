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
	unsigned int check = 0, okay, i;

	for (x = 0; s[okay] != '\0' && okay == check; okay++)
		for (i = 0; accept[i] != '\0'; i++)
			if (s[okay] == accept[i])
				check++;

	return (check);
