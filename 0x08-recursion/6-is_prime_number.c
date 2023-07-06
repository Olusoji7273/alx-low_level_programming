#include "main.h"

int check_prime(int, int);
/**
 *is _prime_number -> prime identifier
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * is_prime_number- returns 1 if the input integer is a prime nunber
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
