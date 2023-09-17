#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/*_printf.c 0-task*/
int _printf(const char *format, ...);
int _print(va_list ptr);

/*_putchar.c function*/
int _putchar(char c);
<<<<<<< HEAD
=======

/* print_function.c */
int print_str(va_list list);
int print_int(va_list list);

>>>>>>> 8449933fc35eb9f3a1a89b3a32495733f7f733be
#endif
