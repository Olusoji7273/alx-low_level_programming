#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- Function that print its name
 * @argc: count
 * @argv: array of an argument
 * Return: return 0 in success
 */
int main(__attribute__((unused)) int argc,
		__attribute__((unused)) char *argv[])
{
	printf("%s", *argv);
	printf("\n");
	return (0);
}
