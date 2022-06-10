#include "main.h"

/**
 * print_most_numbers - print most numbers 0 to 9 except a few
*/

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
