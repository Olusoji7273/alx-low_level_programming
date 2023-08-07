#include "main.h"
#include <stdio.h>
/**
 * main- A program that prints the number of arguments passed into it
 * @argc: number of argument passed
 * @argv: array of arguments
 * Return: it returns 0 after execution
 */
int main(__attribute__((unused)) int argc,
		__attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
