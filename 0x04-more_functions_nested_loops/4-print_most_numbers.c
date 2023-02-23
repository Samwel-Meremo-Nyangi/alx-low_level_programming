#include "main.h"
/**
 * print_most_numbers - Prints numbers 0 - 9 except
 * from 2 and 4
 * we use _putchar twice
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int t;

	for (t = 0; t <= 9; ++t)
	{
		if ((t == 2 || t == 4))
			_putchar(t + 48);
	}
	_putchar('\n');
}
