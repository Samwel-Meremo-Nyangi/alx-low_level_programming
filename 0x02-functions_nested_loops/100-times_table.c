#include "main.h"
/**
 * print_times_table - Multiplies the input
 * @n: to be considered
 */
void print_times_table(int n)
{
	int j, h, multiply;

	if (n >= 0 && n <= 15)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('0');

			for (h = 1; h <= n; h++)
			{
				_putchar(',');
				_putchar(' ');

				multiply = j * h;

				if (multiply <= 99)
					_putchar(' ');
				if (multiply <= 9)
					_putchar(',');
				if (multiply >= 100)
				{
					_putchar((multiply / 10) + '0');
					_putchar(((multiply / 10) % 10) + '0');
				}
				else if (multiply <= 99 && multiply >= 10)
				{
					_putchar((multiply / 10) + '0');
				}
				_putchar((multiply % 10) + '0');
			}
			_putchar('\n');

		}
	}
}
