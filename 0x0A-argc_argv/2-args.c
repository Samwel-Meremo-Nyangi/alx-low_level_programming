#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int all_args;

	for (all_args = 0; all_args < argc; all_args++)
	{
		printf("%s\n", argv[all_args]);
	}

	return (0);
}
