#include "main.h"
/**
 * print_sign - Shows positive or negative
 * @n: checked
 * Return: 1 and print + for positive
 * 0 and print 0 ASCII 048 for zero
 * -1 and print - for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
