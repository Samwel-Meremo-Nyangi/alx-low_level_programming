#include "main.h"
/**
 * swap_int - swaps values of two intergers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int integer;

	integer = *a;
	*a = *b;
	*b = integer;
}
