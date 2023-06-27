#include "main.h"
/**
 * puts2- function that print other character of a string
 * @str: string to print its other character
 *
 * Return: It returns 0 after execution
 */

void puts2(char *str)
{
	int i = 0;
	int j;
	int k = 0;
	char *b = str;

	while (*b != '\0')
	{
		b++;
		i++;
	}
	k = i - 1;
	for (j = 0; j <= k ; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
