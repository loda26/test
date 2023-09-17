#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
*_printf - a function that produces output according to a format
*@format: is a character string
*Description: Write a function that produces output according to a format
*Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
va_list ptr;
char *string;
int c, n = 0;
va_start(ptr, format);
while (format && format[n])
{
n++;
}
while (format && format[c])
{
if (format[c] == '%')
{
c++;
if (format[c] == 'c')
{
c = va_arg(ptr, int);
_putchar(c);
}
if (format[c] == 's')
{
string = va_arg(ptr, char *);
if (string != NULL)
{
_putchar(*string);
}
}
if (format[c] == '%')
{
_putchar('%');
}
}
c++;
}
va_end(ptr);
return (n);
}
