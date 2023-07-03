#include "main.h"
#include <string.h>
/**
 * _memcpy- A function that copies memory area
 * @src: Source to copy memory area
 * @dest: destination to copy into
 * @n: represents no of bytes to be copied
 * Return: It returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
