#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: that is the char array to copy into
 * @src: this is the char array to copy from
 * @n: shows number of members to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int storage = 0;

	while (n > storage)
	{
		dest[storage] = src[storage];
		storage++;
	}

	return (dest);
}
