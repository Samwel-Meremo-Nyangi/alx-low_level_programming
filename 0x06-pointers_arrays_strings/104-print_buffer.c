#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffers
 * @b: beffer
 * @size: buffer size
 * Return: none
 */
void print_buffer(char *b, int size)
{
	int buf1, buf2;

	for (buf1 = 0; buf1 < size;  buf1 += 10)
	{
		printf("%08x: ", buf1);

		for (buf2 = 0; buf2 < 10; buf2++)
		{
			if ((buf2 + buf1) >= size)
				printf(" ");
			else
				printf("%02x", *(b + buf2));
			if ((buf2 % 2) != 0 && buf2 != 0)
				printf(" ");
		}
		for (buf2 = 0; buf2 < 10; buf2++)
		{
			if ((buf2 + buf1) >= size)
				break;
			else if (*(b + buf2 + buf1) >= 31 && *(b + buf2 + buf1) <= 126)
				printf("%c", *(b + buf2 + buf1));
			else
				printf(".");
		}

		if (buf1 >= size)
			continue;
		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
