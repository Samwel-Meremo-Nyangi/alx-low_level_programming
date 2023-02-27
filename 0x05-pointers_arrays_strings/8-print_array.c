#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array elements
 * @a: first integer
 * @n: second integer
 * Return: voidd
 */
void print_array(int *a, int n)
{
	int sam = 0;

	for (sam = 0; sam < n; sam++)
	{
		printf("%d", a[sam]);
		if (sam < n - 1)
			printf(",");
	}
	printf("\n");
}
