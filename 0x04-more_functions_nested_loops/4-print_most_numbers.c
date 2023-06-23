#include "main.h"
/**
 * print_most_numbers- Function that prints the numbers from 0 to 9
 *
 * Return: It returns 0 after execution
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		if (n != 2 && n != 4)
			_putchar(n + '0');
	_putchar('\n');
}
