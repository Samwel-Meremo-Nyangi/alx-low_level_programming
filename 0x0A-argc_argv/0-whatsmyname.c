#include "main.h"
#include <stdio.h>
/**
 * main - name of program printed
 * @argv: array of args
 * @argc: number of args
 * Return: int
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[argc]);

	return (0);
}
