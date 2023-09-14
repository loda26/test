#include "main.h"

/***/
void print_char(char c)
{
	return(write(1, &c, 1));
}

/**
 * _printf - printf function
 * @format: input format
 * Return: printed chars
*/

int _printf(const char *format, ...)
{
	int char_count = 0, i;
	va_list list;

	if (format == NULL)
		return (1);

	va_start(list, format);

	for (i = 0; format && format != NULL; i++)
	{
		if (format[i] != '%')
		{
			print_char(format);
		}
		else if(fromat[i] == '%')
			i++;
	}

	va_end(list);
}
