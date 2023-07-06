#include "main.h"

int check_prime(int, int);
/**
 * is_prime_number - prime identifier
 * @n: input
 * Return: Returns prime number
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime- returns 1 if the input integer is a prime nunber
 * @n: integer
 * @i: iterator
 * Return: it returns 1 if n is prime, 0 if not
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}
