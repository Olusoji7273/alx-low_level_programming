#include "main.h"
/**
 * print_alphabet- function that prints the alphabet, in lowercase, followed by a new line
 *
 * Return:It returns 0 after the execution
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');	
}
