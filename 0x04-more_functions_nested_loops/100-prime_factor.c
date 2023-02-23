#include <stdio.h>
#include <math.h>
/**
 * main - prints largest prime factor
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int s, a, m;

	s = 612852475143;
	a = -1;
	while (s % 2 == 0)
	{
		a = 2;
		s /= 2;
	}
	for (m = 3; m <= sqrt(s); m = m + 2)
	{
		while (s % m == 0)
		{
			a = m;
			s = s / m;
		}
	}
	if (s > 2)
		a = s;
	printf("%ld\n", a);

	return (0);
}
