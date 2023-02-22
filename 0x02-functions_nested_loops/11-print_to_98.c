#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints natural numbers
 * @n: starts
 */
void print_to_98(int n)
{
	int sam;

	if (n >= 0 && n <= 98)
	{
		for (sam = n; sam <= 98; sam++)
		{
			printf("%d", sam);
			if (sam != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (sam = n; sam <= 98; sam++)
		{
			printf("%d", sam);
			if (sam != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (sam = n; sam >= 98; sam++)
		{
			printf("%d", sam);
			if (sam != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d", n);
}
