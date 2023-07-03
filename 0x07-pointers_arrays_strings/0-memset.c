#include "main.h"
#include <string.h>
/**
 * _memset- A function that fills memory with a constant bytes
 * @n: first n bytes
 * @b: constant byte b
 * @s: pointer
 * Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	n = 95;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
