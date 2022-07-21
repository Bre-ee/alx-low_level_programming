#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes character to the stdout.
 * @c: Character to be  written.
 *
 * Return: On sucess 1
 * On error -1 is returned and errmo is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
