#include "main.h"
/**
 * print_line- Function that draws a straight line
 * @n: This is the number of times
 * Return: It returns 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
