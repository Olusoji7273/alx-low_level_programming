#include "main.h"
#include <unistd.h>
/**
 * _putchar- Writes the character c to stdout
 * @c: character to ptint
 *
 * Return: It returns 1 on success
 * on error, it returns -1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
