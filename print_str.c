#include "main.h"

/***	print strinf function	***/
/**
 * print_str - prints the string
 * @list: input
 * Return: string
*/
int print_str(va_list list)
{
	char *str;
	int str_count = 0;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		str = "(null)";
		while (*str)
		{
			write(1, str, 1);
			str_count++;
			str++;
		}
		return (str_count);
	}
	else
	{
		while (*str)
		{
			write(1, str, 1);
			str_count++;
			str++;
		}
		return (str_count);
	}
}
