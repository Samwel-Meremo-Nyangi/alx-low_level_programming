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

	for (op = 64; op < 74; op++)
	{
		for (ls = 65; ls < 74; ls++)
		{
			for (hf = 66; hf < 74; hf++)
			{
				if (hf > ls && ls > op)
				{
					putchar(op);
					putchar(ls);
					putchar(hf);
					if (ls != 71 || ls != 72)
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
