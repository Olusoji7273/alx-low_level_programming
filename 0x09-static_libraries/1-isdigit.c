#include "main.h"
/**
 * _isdigit- Function that check for a digit
 * @c: C is the value to be checked
 * Return: Returns 1 if its digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
