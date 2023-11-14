#include "main.h"

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
		if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			int num = va_arg(args, int);
			count += print_int(num);
            format += 2;
		}
		else
		{
			_putchar(*format);
			count++;
		}

		format++;
	}

	va_end(args);

	return (count);
}
