#include <stdio.h>
/**
 * main -Main program entry
 *
 * Return: 0
 */
int main(void)
{
	int k = 0;
	long int s = 0, h = 1, next;

	while (k < 50)
	{
		next = s + h;
		s = h;
		h = next;
		printf("%lu", next);

		if (k < 49)
		{
			printf(". ");
		}
		k++;
	}
	printf("\n");
	return (0);
}
