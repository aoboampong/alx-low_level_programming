#include "main.h"
/**
* print_chessboard - prints out a chessboard
*
* @a: chessboard to print, 2D array [8] columns
*
* Return: always void
*/
void print_chessboard(char (*a)[8])
{
	int pl, pk = 0;

	while (pk < 8)
	{
		pl = 0;
		while (pl < 8)
			_putchar(a[pk][pl++]);
		_putchar('\n');
	pk++;
	}
}
