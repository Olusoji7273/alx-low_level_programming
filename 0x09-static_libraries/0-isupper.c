#include "main.h"
/**
 * _isupper- Function that check for uppercase character
 * @c: Letter to be checked
 * Return: it returns 1 if its upper and 0 if its not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
