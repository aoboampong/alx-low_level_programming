#include "main.h"

/**
 * _isdigit - will check for a digit 0 to 9
 * @c: that is digit checked
 * Return: returns 0 when successful
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
