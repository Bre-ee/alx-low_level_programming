#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: the destiation string to be concatenated upon
 * @src: the source string to append to @dest
 *
 * Return: a pointer.
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a++])
		b++;

	for (a = 0; src[a]; a++)
		dest[b++] = src[a];
	return (dest);
}
