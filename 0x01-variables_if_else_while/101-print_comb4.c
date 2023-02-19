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

	for (op = 72; op < 82; op++)
	{
		for (ls = 73; ls < 82; ls++)
		{
			for (hf = 74; hf < 82; hf++)
			{
				if (op < ls && ls < hf)
				{
					putchar(op);
					putchar(ls);
					putchar(hf);
					if (ls != 79 || ls != 80)
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
