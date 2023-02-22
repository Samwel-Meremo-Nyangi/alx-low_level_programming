#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints natural numbers n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	int alx, sam;

	if (n <= 98)
	{
		for (alx = n; alx <= 98; alx++)
		{
			if (alx != 98)
			{
				printf("%d, ", alx);
			}
			else if (alx == 98)
			{
				printf("%d\n", alx);
			}
		}
	} else if (n >= 98)
	{
		for (sam = n; sam >= 98; sam++)
		{
			if (sam != 98)
			{
				printf("%d, ", sam);
			}
			else if (sam == 98)
			{
				printf("%d\n", sam);
			}
		}
	}
}

