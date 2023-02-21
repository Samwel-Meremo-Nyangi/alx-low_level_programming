#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints c to stdout
 *
 * Return: (1) (Success)
 * Return: (-1) (Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
