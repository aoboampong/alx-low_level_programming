#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * Only putchar without char variables will be used.
 *
 * Return: Always 0 (success).
 */
int main(void)
{

	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
