#include "main.h"

/**
 * print_char - prints the character
 * @c: char input
 * @len: length
*/
void print_char(char c, int *len)
{
	if (*len > 0)
		write(1, &c, *len);
	*len = 0;
}

/**
 * _printf - printf function
 * @format: input format
 * loda and alaa code ^_^
 * Return: printed chars
*/

int _printf(const char *format, ...)
{
	int char_count = 0, one = 1, str_len, i;
	char c;
	va_list list;

	if (format == NULL)
		return (1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			print_char(format[i], one);
			char_count++;
		}
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(list, int);
				print_char(c, one);
				char_count++;
			}
			else if (format[i] == 's')
			{
				char *ptr = va_arg(list, char*);

				for (str_len = 0; ptr[str_len] != '\0'; str_len++)
					;
				print_char(ptr, str_len);
				char_count += str_len;
			}
			else if (format[i] == '%')
			{
				print_char(format[i], one);
				char_count++;
			}
		}
	}
	va_end(list);
	return (char_count);
}