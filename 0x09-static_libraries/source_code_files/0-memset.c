#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: ponter to the block of memory to be fil.
 * @b: value to fill.
 * @n: memory of bytes to be set to the value.
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
