#include "main.h"
#include <stdio.h>
/**
 * main - name of program printed
 * @argv: array of args
 * @argc: number of args
 * Return: int
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
