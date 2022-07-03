#include "main.h"

/**
 * factorial - function factorial of n
 * @n: factorial number n
 * Return: factorial of the given number
 */

int factorial(int n)
{
	if (n == 1)
		return (1);

	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
