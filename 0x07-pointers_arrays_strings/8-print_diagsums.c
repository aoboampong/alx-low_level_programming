#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function to print the sum of a square matrix
 *
 * @a: the matrix
 * @size: the size of the matrix
 *
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int set, first_add = 0, second_add = 0;

	for (set = 0; set < size; set++)
	{
		first_add += a[(size + 1) * set];
		second_add += a[(size - 1) * (set + 1)];
	}
	printf("%d, %d\n", first_add, second_add);
}
