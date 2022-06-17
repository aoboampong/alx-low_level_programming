#include "main.h"

/**
 * _strncpy - copies n bytes of src to the dest string
 * @dest: is a string
 * @src: is a string
 * @n: string with n most bytes
 *
 * Return: address of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && *(src + i))
	{
		*(dest + a) = *(src + a);
		a++;
	}
	while (a < n)
	{
		*(dest + a) = '\0';
		a++;
	}
	return (dest);
}
