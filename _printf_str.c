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
 * print_string - Prints a string to the standard output (stdout).
 * @str: The input string.
 *
 * Return: The number of characters printed (excluding the null byte).
 */

int print_string(const char *str)
{
	int count = 0;

	for (; *str; _putchar(*str), count++, str++)
		;

	return (count);
}
