#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, the number of characters written (1); on error, -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - Prints a single character to the standard output (stdout).
 * @c: The character to be printed.
 *
 * Return: The number of characters printed (1).
 */

int print_char(int c)
{
	_putchar(c);
	return (1);
}
