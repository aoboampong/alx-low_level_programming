#include "main.h"

/**
 *  * _isupper - will check for Uppercase character
 *   * @c: character that will be checked
 *    * Return: Alway returns 0 wtih success
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
