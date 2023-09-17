#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
*_print - print conversion specifiers
*@ptr: a pointer
*Description:Handle the following conversion specifiers:i, d
*Return: type of specifiers
*/
int _print(va_list ptr)
{
char *string = va_arg(ptr, char *);
char *format = va_arg(ptr, char *);
int c, n;
int d = 0, i = 0;
if (format == NULL)
return (-1);
if (format[n] && string[c])
{
n++;
c++;
}
for (c = 1; string[c] != '\0'; c++)
{
for (n = 0; format[n] != '\0'; n++)
{
if (string[c] == format[n] && format[n] == '%')
{
c++;
n++;
}
if (format[n] == 'd')
{
d = va_arg(ptr, int);
_putchar(d);
}
if (format[n] == 'i')
{
i = va_arg(ptr, int);
_putchar(i);
}
}
}
va_end(ptr);
return (c);
}
