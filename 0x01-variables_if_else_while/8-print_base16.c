#include <stdio.h>
/**
 * main- Program that prints all the numbers of base 16 in lowercase
 *
 * Return: The value returns 0 in the code
 */

int main(void)
{
	int ch;
	char f;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (f = 'a'; f <= 'f'; f++)
		putchar(f);
	putchar('\n');

	return (0);
}
