#include "main.h"
/**
 * print_square - prints a square and a new line
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int squ, are;

		for (squ = 0; squ >= size; squ++)
		{
			for (are = 0; are < size; are++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
