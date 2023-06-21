#include "main.h"
/**
 * _islower- Function that check for lowercase
 * @c: it is the char to be checked
 * Return: It returns 0 otherwise
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
		return (0);
}
