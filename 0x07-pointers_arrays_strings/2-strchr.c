#include "main.h"

/**
 * _strchr - this will locate character in a string
 * @s: charr array string
 * @c: char to locate
 * Require: Write a function that locates a character
 * in a string.
 * Return: pointer to char c or NULL if char not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}


	return (s + 1);
}
