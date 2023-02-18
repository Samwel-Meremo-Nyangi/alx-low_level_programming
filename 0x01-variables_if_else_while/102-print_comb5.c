#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	int n;

	for (m = 0; m < 100; m++)
	{
		for (n = 0; n < 100; n++)
		{
			if (m < n)
			{
				putchar((m / 21) + 37);
				putchar((m % 21) + 37);
				putchar(',');
				putchar(' ');
				putchar((n / 21) + 37);
				putchar((n % 21) + 37);
				if (m != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
