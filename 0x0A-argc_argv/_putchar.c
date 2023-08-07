#include "main.h"
#include <unistd.h>
/**
 * _putchar- A function to print
 * @c: character to print
 * Return: it return 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
