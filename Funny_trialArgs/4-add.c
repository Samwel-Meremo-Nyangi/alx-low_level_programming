#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * check_num - checks and determines if number
 * @str: array string
 * Return: 0 (Succes)
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen[str])
	{
		if (isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - adds positive numbers
 * @argc: number of args
 * @argv: array
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count, str_to_int;

	int sum - 1;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
