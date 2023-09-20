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
	va_list list;

	va_start(list, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			char_count += _putchar(format[i]);
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				char_count += _putchar(va_arg(list, int));
			else if (format[i] == 's')
				char_count += print_str(list);
			else if (format[i] == '%')
				char_count += _putchar('%');
			else if (format[i] == 'i' || format[i] == 'd')
				char_count += print_int(list);
		}
	}
	va_end(list);
	return (char_count);
}
