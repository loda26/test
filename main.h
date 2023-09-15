#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024
#define BUFF -1

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/*_printf.c 0-task*/
int _printf(const char *format, ...);

/*_puts.c function*/
int _puts(char *str);
int _putchar(int c);

/**
 * struct spc - struct specifier
 * @spc: input token
 * @f: function associated
*/
typedef struct spc
{
	char *spc;
	int (*f)(va_list, para_t *);
} sec_t;

/*print_func.c*/
int print_char(va_list list, para_t *para);
int print_str(va_list list, para_t *para);
int print_percent(va_list list, para_t *para);
int print_int(va_list list, para_t *para);

#endif
