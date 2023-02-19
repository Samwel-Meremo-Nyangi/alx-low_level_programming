#include <stdio.h>
/**
 * main -Entry program
 *
 * Return: 0 (Succcess)
 */
int main(void)
{
	int op;
	int ls;
	int hf;

	for (op = 48; op < 58; op++)
	{
		for (ls = 49; ls < 58; ls++)
		{
			for (hf = 50; hf < 58; hf++)
			{
				if (hf > ls && ls > op)
				{
					putchar(op);
					putchar(ls);
					putchar(hf);
					if (ls != 55 || ls != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
