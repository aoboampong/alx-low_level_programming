#include "main.h"

/**
 * print_line - This prints a straight line
 * @n: That is length of the line
*/
void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}
