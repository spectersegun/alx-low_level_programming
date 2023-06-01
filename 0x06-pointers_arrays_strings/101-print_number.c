#include "main.h"

/**
 * print_number - prints the digits of an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = (n < 0) ? -n : n; // Use ternary operator to handle negative numbers

	if (n < 0)
		_putchar('-'); // Print the negative sign

	if (n1 / 10 != 0)
		print_number(n1 / 10); // Recursively call print_number for remaining digits

	_putchar((n1 % 10) + '0'); // Print the last digit as a character
}
