#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of matrix diagonals
 * @a: input pointer
 * @size: input
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum, sum1, d;

	sum = 0;
	sum1 = 0;

	for (d = 0; d < size; d++)
	{
		sum = sum + a[d * size + d];
	}
	for (d = size - 1; d >= 0; d--)
	{
		sum1 += a[d * size + (size - d - 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
