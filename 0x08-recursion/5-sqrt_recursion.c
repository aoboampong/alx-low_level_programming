#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: let n be the number
 * Return: all conditions passed, return n square root
 */

int _sqrt_recursion(int n)
{
	int sqrt_fun(int n, int sq);

	int checker = 1;

	return (sqrt_fun(n, checker));
}

/**
 * sqrt_fun - function included to solve _sqrt_recursion
 * @checker: number to determine if square root
 * @n:  let n be the number
 * Return: conditions passed, return square root of n
 */

int sqrt_fun(int n, int checker)
{
	if (n == checker * checker)
	{
		return (checker);
	}
	else if (checker < n)
	{
		return (sqrt_fun(n, ++checker));
	}
	else
	{
		return (-1);
	}
}
