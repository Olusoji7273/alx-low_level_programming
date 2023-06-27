#include "main.h"
/**
 * print_rev- a function that prints a string in reverse
 * @s: the variable to print its string
 *
 * Return: It returns 0 after execution
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
