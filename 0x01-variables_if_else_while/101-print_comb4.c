#include <stdio.h>
/**
 * main- Program that prints all possible different combinations of 3 digits
 *
 * Return: It return 0 at the end of the block
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i < 7 || j < 8 || k  < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
