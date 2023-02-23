#include <stdio.h>
/**
 * square_root - prints prime numbers
 *
 * @w: input number
 *
 * Return: square root
 */
double square_root(double w)
{
	double root, sam;

	root = w / 2;
	sam = 0;

	while (root != sam)
	{
		sam = root;
		root = (w / sam + sam) / 2;
	}
	return (root);
}
/**
 * largest_prime_factor - prints largest prime factor
 *
 * @prime: number to find
 */
void largest_prime_factor(int prime)
{
	int prime, factor, k;

	while (prime % 2 == 0)
		prime = prime / 2;
	for (k = 3; k <= root(prime); k += 2)
	{
		while (prime % k == 0)
		{
			prime = prime / k;
			factor = k;
		}
	}
	if (prime > 2)
		factor = prime;
	printf("%d\n", factor);
}
