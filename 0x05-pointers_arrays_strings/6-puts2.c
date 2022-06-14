#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: str is a string
 */

void puts2(char *str)
{
	int d;

	d = 0;

	while (str[d] != '\0')
	{
		if (d % 2 == 0)
			_putchar(str[d]);
		d++;
	}
	_putchar('\n');
}
