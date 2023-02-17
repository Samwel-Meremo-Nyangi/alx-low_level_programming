#include <stdio.h>
/**
 * main -Entry program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 2;
	int b = 1;
	int c = 0;

	while (c < 10)
	{
		b = 0;
		while (b < 10)
		{
			a = 0;
			while (a < 10)
				if (a != b && b != c && c < b && b < a)
				{
					putchar(c + '0');
					putchar(b + '0');
					putchar(a + '0');

					if (a + b + c != 0 + 1 + 2)
					{
						putchar(',');
						putchar(' ');
					}
				}
				a++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
