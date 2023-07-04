#include "main.h"
#include <string.h>
/**
 * _strspn- A function that gets the length of a prefix substring
 * @s: string s to return its initial segment
 * @accept: main string that contains whole character
 * Return: It returns initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
