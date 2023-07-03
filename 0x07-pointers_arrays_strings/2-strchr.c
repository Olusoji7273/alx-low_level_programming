#include "main.h"
#include <string.h>
/**
 * _strchr- Function that locates a character in a string
 * @c: character c
 * @s: pointer
 * Return: it returns a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int i;
	int j = strlen(s);

	for (i = 0; i < j; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}

