#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Function to print the last digit of the number stored in variable
 *
 * Return: It returns 0 in the function
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("Last digit of %d is and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %d is and is 0\n", n);
	else
		printf("Last digit of %d is and is less 6 and not 0\n", n);

	return (0);
}
