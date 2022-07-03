#include "main.h"

/**
 * _strlen_recursion - recieves the length of string
 * @s: points to a string
 * Return: looper plus one
 */

int _strlen_recursion(char *s)
{
	int looper = _strlen_recursion(s + 1);

	if (*s == '\0')
		return (0);

	return ((1 + looper));
}
