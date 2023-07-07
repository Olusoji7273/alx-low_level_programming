#include "main.h"
/**
 * _isalpha- Function that check for alphabet
 * @c: It is the character to be checked
 * Return: It return 1 if its letter
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
