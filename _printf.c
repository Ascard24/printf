#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string containing conversion specifiers
 * @...: Variable number of arguments
 * Return: Number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args :
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
					count += _putchar(va_arg(args, int));
					break;

				case 's':
					count += _printf_str(va_arg(args, const char *));
					break;

				case '%':
					count += _putchar('%');
					break;

				default:
					count += _putchar('%');
					count += _putchar(*format);
			}
		}
		else
		{
			count += _putchar(*format);
		}

		format++;
	}

	va_end(args);
	return (count);
}
