#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * @a: performs calculation
 * Return: 1 for prime number, 0 for success
 */

int verifier(int n, int a);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (verifier(n, n - 1));
}

/**
 * verifier - calculates if a number is prime recursively
 * @n: number to evaluate
 * @a: performs calculation
 *
 * Return: 1 for prime number, 0 for success
 */
int verifier(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (verifier(n, a - 1));
}
