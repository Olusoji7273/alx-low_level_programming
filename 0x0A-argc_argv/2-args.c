#include "main.h"
#include <stdio.h>
/**
 * main- program thats all argument it recieves
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: it return 0 after execution
 */

int main(__attribute__((unused)) int argc,
		__attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
