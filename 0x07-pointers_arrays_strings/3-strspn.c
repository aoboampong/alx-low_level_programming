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
	unsigned int check = 0
	unsigned int okay;
	unsigned int sure;

	for (check = 0; s[okay] != '\0' && okay == check; okay++)
		while (sure = 0; accept[sure] != '\0')
			if (s[okay] == accept[sure])
				check++;
		sure++;

	return (check);
