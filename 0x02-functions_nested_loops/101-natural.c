#include<stdio.h>
/**
 * main - Entry of program
 *
 * Return: 0
 */
int main(void)
{
	int j;
	int sum;

	sum = 0;
	for (j = 0; j < 10; j++)
	{
		if ((j % 3 == 0) || (j % 5 == 0))
		{
			sum = sum + j;
		}
	}
	printf("%d\n", sum);
	return (0);
}
