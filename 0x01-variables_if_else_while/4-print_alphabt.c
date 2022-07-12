#include <stdio.h>

/**
 * main - prints the alphabet in lowercase.
 *          Print all the letters except q and e.
 *
 * Return: Always 0.
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
