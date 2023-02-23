#include "main.h"
#include <unistd.h>
/**
 * _putchar - erites character c to stdout
 * @c: character to print
 *
 * Return: Success 1
 * On error: -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
