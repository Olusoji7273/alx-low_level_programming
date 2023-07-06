#include "main.h"
/**
 * _pow_recursion- returns the value of x raise to power y
 * @x: input
 * @y: input
 * Return: It returns 0 at execution
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return _pow_recursion(x, y - 1) * x;
}
