#include "main.h"
int squareroot_recursion(int n, int number);
/**
 * _sqrt_recursion - returns squareroot of a number
 * @n: the square
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squareroot_recursion(n, 0));
}
/**
 * squareroot_recursion - finds natural square root
 * @n: square
 * @number: iterator
 * Return: square root
 */
int squareroot_recursion(int n, int number)
{
	if (number * number > n)
		return (-1);
	if (number * number == n)
		return (number);
	return (squareroot_recursion(n, number + 1));
}
