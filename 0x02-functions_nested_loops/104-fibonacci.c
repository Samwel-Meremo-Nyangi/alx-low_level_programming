#include <stdio.h>
/**
 * main - Main program
 *
 * Return: 0
 */
int main(void)
{
	int m;
	unsigned long n = 0, p = 1, add, n1, n2, p1, p2, j, b;

	for (m = 0; m < 92; m++)
	{
		add = n + p;
		printf("%lu, ", add);

		n = p;
		p = add;
	}

	n1 = n / 10000000000;
	p1 = p / 10000000000;
	n2 = n % 10000000000;
	p2 = p % 10000000000;

	for (m = 93; m < 99; m++)
	{
		j = n1 + p1;
		b = n2 + p2;

		if (n2 + p2 > 9999999999)
		{
			j += 1;
			b %= 10000000000;
		}
		printf("%lu%lu", j, b);
		if (m != 98)
			printf(",");
		n1 = p1;
		n2 = p2;
		p1 = j;
		p2 = b;
	}
	printf("\n");
	return (0);
}
