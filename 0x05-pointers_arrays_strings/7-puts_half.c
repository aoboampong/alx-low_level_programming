#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: str is a string
 *
 * Return: empty
*/
void puts_half(char *str)
{
	int a, d = 0;

	while (*(str + d))
		d++;
	a = d / 2;

	if (d % 2)
	a += 1;

	while (a < d)
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
