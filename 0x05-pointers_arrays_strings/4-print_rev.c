#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints the reverse of a string
 *
 * @s: pointer s is a char
 *
 * Return: Always 0 for success
*/
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
