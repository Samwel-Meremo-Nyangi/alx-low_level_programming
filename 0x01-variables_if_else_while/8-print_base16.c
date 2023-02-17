#include <stdio.h>
/**
 * main - program enters and begins here
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char e;

	char z;

	e = 'a';
	z = 0;
	while
		(e <= 'f') {
			putchar(e);
			e++;
		}
	while
		(z <= 10) {
			putchar(z + '0');
			z++;
		}
	putchar('\n');
	return (0);
}
