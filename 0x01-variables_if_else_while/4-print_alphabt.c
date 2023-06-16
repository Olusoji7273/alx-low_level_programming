#include <stdio.h>
/**
 * main- A program that prints the alphabet in lowercase except q and e
 *
 * Return: It returns 0 after the newline
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	if ((ch != 'q') && (ch != 'e'))
		putchar(ch);
	putchar('\n');

	return (0);
}

