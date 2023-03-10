#include <stdio.h>
#include "main.h"
/**
 * main - prints argc
 * @argc: number of args
 * @argv: array
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
