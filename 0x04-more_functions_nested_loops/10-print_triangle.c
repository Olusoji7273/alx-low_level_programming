#include "main.h"
/**
 * print_triangle- Function that printtriangle
 * @size: The size of a Triangle
 * Return: It returns 0 after execution
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = i; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
