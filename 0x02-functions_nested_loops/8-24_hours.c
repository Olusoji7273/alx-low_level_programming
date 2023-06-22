#include "main.h"
/**
 * jack_bauer- Function that print every minutes of the day
 *
 * Return: Return 0 at execustion
 */

void jack_bauer(void)
{
	int i;
	int j;

	i = 0;

	while (i < 24)
	{
		j = 0;

		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
	}

}
