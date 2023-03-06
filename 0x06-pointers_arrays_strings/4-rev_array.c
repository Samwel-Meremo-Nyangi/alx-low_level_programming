#include "main.h"
/**
 * reverse_array - reverses integer arrays
 * @a: array
 * @n: elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int arr, rev;

	for (arr = 0; arr < n--; arr++)
	{
		rev = a[arr];
		a[arr] = a[n];
		a[n] = rev;
	}
}
