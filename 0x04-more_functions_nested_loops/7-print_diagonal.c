i#include "main.h"

/**
 * print_diagonal - prints a diagonal line using \ character
 * @n: number of times \ character to be printed
 */

void print_diagonal(int n)
{
	int length, space;

	if (n > 0)
	{
		for (length = 1; length < n; length++)
		{
			_putchar('\');

		}
	}
	_putchar('\n');
}
