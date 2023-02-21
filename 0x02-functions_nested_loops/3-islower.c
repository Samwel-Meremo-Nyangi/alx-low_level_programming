#include "main.h"
/**
 * _islower - Checking lowercases
 * @c: is to be checked
 *
 * Return: 1 Sucess otherwise, 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
