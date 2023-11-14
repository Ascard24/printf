#include "main.h"

/**
 * print_custom_format - Handle custom format specifier %r.
 * @args: The va_list containing the arguments.
 * Return: The number of characters printed.
 */
int print_custom_format(va_list args)
{
	int value = va_arg(args, int);
		return (print_number(value));
}
