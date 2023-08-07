#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- a program that multiplies two numbers
 * @argc: count
 * @argv: array of arguments
 * Return: it return error if doesnt receive
 *  2 arguments
 */

int main(__attribute__((unused)) int argc,
		__attribute__((unused)) char *argv[])
{
	int i;
	int result;

	for (i = 1; i < argc; i++)
	{
		if (argc == 2)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result = atoi(argv[i+1]) * atoi(argv[i]);
			printf("%d\n", result);
		}
		return (0);
	}

	return (0);
}
