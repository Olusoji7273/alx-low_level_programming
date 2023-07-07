#include "main.h"
/**
 * _puts- a function that prints a string
 * @str: variable to print its string
 *
 * Return: it returns 0 after execution
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
