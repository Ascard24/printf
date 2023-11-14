#include "main.h"

/**
 * print_int - Prints an integer to the standard output (stdout).
 * @num: The integer to be printed.
 * Return: The number of characters printed.
 */
int print_int(int num)
{
	return (print_positive_int(num));
}

/**
 * print_positive_int - Prints a positive integer to the standard output (stdout).
 * @num: The positive integer to be printed.
 * Return: The number of characters printed.
 */
int print_positive_int(int num)
{
	if (num / 10 != 0)
		print_positive_int(num / 10);

	_putchar(num % 10 + '0');
	return (1);
}
