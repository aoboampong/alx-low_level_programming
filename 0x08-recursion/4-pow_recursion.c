#include "main.h"

/**
 * _pow_recursion - calculates x to the power y
 * @x: that is x base number
 * @y: is the index
 * Return: value of x raise to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
