#include "main.h"
/**
 * print_alphabet_x10- Prints 10 times the alphabet in lowercase
 *
 * Return: It returns 0 at the execution
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
