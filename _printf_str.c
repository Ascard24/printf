#include "main.h"

/**
 * _printf_str - Prints a string to the standard output (stdout).
 * @str: The string to be printed.
 * Return: The number of characters printed.
 */
int _printf_str(const char *str)
{
	int count = 0;

	for (; *str; count++, str++)
		count += _putchar(*str);

	return (count);
}
