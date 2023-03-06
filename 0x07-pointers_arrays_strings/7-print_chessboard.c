#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int bi, bo;

	for (bi = 0; bi < 8; bi++)
	{
		for (bo = 0; bo < 8; bo++)
			_putchar(a[bi][bo]);
		_putchar('\n');
	}
}
