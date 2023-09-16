#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/*_printf.c 0-task*/
int _printf(const char *format, ...);

/*_putchar.c function*/
int _putchar(char c);

/* print_function.c */
int print_str(va_list list, para_t *para);
int print_int(va_list list, para_t *para);

#endif
