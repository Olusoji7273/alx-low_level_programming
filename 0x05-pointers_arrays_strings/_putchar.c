#include "main.h"
#include <unistd.h>
/**
 * _putchar- Function to include putchar
 * @c: The character to be checked
 *
 * Return: Return 0 at the end
 * On error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
