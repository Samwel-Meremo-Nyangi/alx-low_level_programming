#include <stdio.h>
/**
 * main - printing numbers 1 to 100 and the multiples
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	num = 1;
	for (num = 2; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", num);
		}
	}
	printf("\n");

	return (0);
}
