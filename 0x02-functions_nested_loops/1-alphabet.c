#include "main.h"
/**
 * print_alphabet - lowercases printed
 *
 * Description: This project will do print_alphabet from a to z
 *
 * Return: return is void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
