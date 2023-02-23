#include "main.h"
/**
 * print_diagonal - prints diagonal on the terminal
 * @n: repeats diagonal n times
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int z, s;

		for (z = 0; z < n; z++)
		{
			for (s = 0; s < n; s++)
			{
				if (s == z)
					_putchar('\\');
				else if (s < z)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
