#include "main.h"
/**
 * print_rev- a function that prints a sting in reverse
 * @s- the variable to print its string
 *
 * Return: It returns 0 after execution
 */

void print_rev(char *s)
{
	int i;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (j = i; i > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
