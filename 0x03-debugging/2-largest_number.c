#include "main.h"
/**
 * largest_number - Prints largest number
 * @a: considered first
 * @b: second
 * @c: third
 *
 * Return: 0
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
