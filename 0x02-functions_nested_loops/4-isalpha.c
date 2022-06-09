#include "main.h"
#include <ctype.h>
/**
 * _isalpha - will check for c alphabetic character
 * @c : defined int c function
 *
 * Description: return results 1 and 0
 *
 * Return: the integer value is returned
 */
int _isalpha(int c)
{
	int i;

	i = isalpha(c);

	if (i != 0)
	{
		return (1);
	}
	if (i == 0)
	{
		return (0);
	}
	return (0);
}
