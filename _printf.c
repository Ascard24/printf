#include "main.h"
#include <stdarg.h>

/**
 * _printf - Custom printf function
 * @format: Format string containing conversion specifiers
 * @...: Variable number of arguments
 * Return: Number of characters printed (excluding the null byte)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					count += print_char(va_arg(args, int));
					break;

				case 's':
					count += print_string(va_arg(args, const char*));
					break;

				case '%':
					count += print_percent();
					break;

				default:
					count += print_percent();
					count += print_char(*format);
			}
		}
		else
		{
			count += print_char(*format);
		}

		format++;
	}
	va_end(args);
	return (0);
}
