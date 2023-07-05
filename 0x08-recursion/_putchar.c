#include "main.h"
#include <unistd.h>
/**
 * _putchar- Function to include putchar
 * @c: character c
 * Return: It returns 1 in success
 * on error: it returns -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
