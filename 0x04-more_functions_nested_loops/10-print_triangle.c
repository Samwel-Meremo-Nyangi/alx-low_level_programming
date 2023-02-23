#include "main.h"
/**
 * print_triangle - prints triangle
 *
 * @size: size of the triangle
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int base, height;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((height + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
