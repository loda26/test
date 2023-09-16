#include "main.h"

/**
 * _printf - printf function
 * @format: input format
 * loda and alaa code ^_^
 * Return: printed chars
*/

int _printf(const char *format, ...)
{
	int char_count = 0, i, j, num, digits, real;
	char c, *str, array[100];
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
			else if (format[i] == 'i' || format [i] == 'd')
			{
				num = va_arg(list, int);
				digits = 0;
				real = num;
				while (real != 0)
				{
					real /= 10;
					digits++;
				}
				real = num;
				for (j = digits - 1; j >= 0; j--)
				{
					array[j] = '0' + (real % 10);
					real /= 10;
				}
				char_count += write(1, array, digits);
			}
		}
	}
	va_end(list);
	return (char_count);
}
