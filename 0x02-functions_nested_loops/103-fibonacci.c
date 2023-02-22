#include <stdio.h>
/**
 * main - Entry program
 *
 * Return: 0
 */
int main(void)
{
	int c = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = c + b;
		c = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%d\n", sum);
	return (0);
}
