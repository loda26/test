#include "main.h"

/**
 * _printf - printf function
 * @format: input format
 * loda and alaa code ^_^
 * Return: printed chars
*/

int _printf(const char *format, ...)
{
	int char_count = 0, i;
	char c, *str;
	va_list list;

	va_start(list, format);

	if (format == NULL)
		return (-1);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			char_count++;
		}
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(list, int);
				_putchar(c);
				char_count++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(list, char *);
				while (*str)
				{
					write(1, str, 1);
					str++;
					char_count++;
				}
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				char_count++;
			}
		}
	}
	va_end(list);
	return (char_count);
}
