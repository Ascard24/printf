#include "main.h"

/**
 * print_number - Prints an integer to the standard output (stdout).
 * @n: The integer to be printed.
 * Return: The number of characters printed.
 */
int print_number(int n)
{
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	if (n / 10)
		count += print_number(n / 10);

	count += _putchar(n % 10 + '0');

	return (count);
}
