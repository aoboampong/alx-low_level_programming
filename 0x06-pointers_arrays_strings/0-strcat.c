#include "main.h"

/**
 * _strcat - will append src to the dest string
 *
 * @dest: is a string
 * @src: is the additional string
 * Return: address of dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
	{
		i++;
	}
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);

}
