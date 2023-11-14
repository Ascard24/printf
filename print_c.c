#include "main.h"

/**
 * _printf_char - print a char.
 * @val: Arguments.
 * Return: 1
 */
int _printf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
