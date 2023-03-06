#include "main.h"
/**
 * print_number - printing integers
 * @n: interger parameters
 * Return: int
 */
void print_number(int n)
{
	unsigned int alx;

	alx = n;

	if (n < 0)
	{
		_putchar('-');
		alx = -n;
	}

	if (alx / 10 != 0)
	{
		print_number(alx / 10);
	}
	_putchar((alx % 10) + '0');
}
