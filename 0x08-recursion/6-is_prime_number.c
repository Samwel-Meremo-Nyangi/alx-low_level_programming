#include "main.h"

int theactual_primenum(int n, int prime);
/**
 * is_prime_number - returns prime number
 * @n: integer
 * Return: 1 if prime otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (theactual_primenum(n, n - 1));
}
/**
 * theactual_primenum - recursively finds prime numbers
 * @n: integer
 * @prime: iterator
 * Return: 1 Success 0 not
 */
int theactual_primenum(int n, int prime)
{
	if (prime == 1)
		return (1);
	if (n % prime == 0 && prime > 0)
		return (0);
	return (theactual_primenum(n, prime - 1));
}
