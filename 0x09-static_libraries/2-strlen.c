#include "main.h"
/**
 * _strlen- a function that returns the lenght of a string
 * @s: A variable to check for its length
 *
 * Return: It returns 0 after execution
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
