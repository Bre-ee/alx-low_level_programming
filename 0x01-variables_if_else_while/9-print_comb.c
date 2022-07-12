#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int n;
	int s;

	for (i = 48; i < 58; i++)
	{
		putchar(i);

		n = 44;
		s = 32;

		if (i != 57)
		{
			putchar(n);
			putchar(s);
		}
	}
	putchar('\n');
	return (0);
}
