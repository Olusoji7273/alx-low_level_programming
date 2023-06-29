#include "main.h"
/**
 * *_strcat- A function to concatenate 2 strings
 * @dest: string to be appended into
 * @src: string to be appended
 * Return: It return 0 after execution
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}	
