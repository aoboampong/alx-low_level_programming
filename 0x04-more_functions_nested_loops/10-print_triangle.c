#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of square
*/

void print_triangle(int size)
{
	int a, b, c, d, s;

	d = 1;
	s = size;

	if (size <= 0)
		_putchar('\n');
	for (b = 0; b < size; b++)
	{
		for (a = 0; a < (s - 1); a++)
			_putchar(' ');
		for (c = 0; c < d; c++)
			_putchar('#');
		_putchar('\n');
		s--;
		d++;
	}
}
