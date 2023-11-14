#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _printf_str(const char *str);
int print_number(int n);
int print_custom_format(va_list args);


#endif /* MAIN_H */

