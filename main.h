#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - struct for to get printer functions
 * @type_arg: identifier
 * @f: pointer for printing functions
 *
 * Description: struct that stores pointers to be a
 * able to get printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _putchar(char c);
int print_char(int c);
int print_string(const char *str);
int print_percent(void);
int print_positive_int(int num);
int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
#endif
