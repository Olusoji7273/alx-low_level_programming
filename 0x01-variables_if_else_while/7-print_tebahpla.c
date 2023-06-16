#include <stdio.h>
/**
 * main- Program that print the lowercase letter in reverse
 *
 * Return: It return 0 after execution
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
