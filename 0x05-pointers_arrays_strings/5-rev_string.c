#include "main.h"
/**
 * rev_string- function that reverses a string
 * @s: string to be reversed
 *
 * Return: It returns 0 at the execustion
 */
void rev_string(char *s)
{
	char rev = s[0];
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		len--;
		rev = s[i];
		s[i] = s[len];
		s[len] = rev;
	}
}
