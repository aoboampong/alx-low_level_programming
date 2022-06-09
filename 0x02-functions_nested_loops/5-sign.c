#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: will check the function
 *
 * Description: We output print results
 *
 * Return: returns the integers
 */
int print_sign(int n)
{
	int i = -1;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (i);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
