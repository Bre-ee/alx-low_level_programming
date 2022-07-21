#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: The number to find factorial of
 *
 * Return: if error -1, the number otherwise.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
