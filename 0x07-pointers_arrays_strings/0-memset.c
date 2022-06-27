#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area with a constant byte
 * @s: is the buffer array
 * @b is the constant that will fill
 * Additional: n bytes points to s with the constant byte
 * Additional: returns a pointer to the memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int storage = 0;
	
	while (n > storage)
	{
		s[storage] = b;
		storage++;
	}

	return (s);
}
