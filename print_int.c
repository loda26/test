#include "main.h"

/***	print integer function	***/
/**
 * print_int - print integer
 * @list: input
 * Return: integer
 */
int print_int(va_list list)
{
	int n = va_arg(list, int);
	int num, last = n % 10, digit, real = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			real = real * 10;
			num = num / 10;
		}
		num = n;
		while (real > 0)
		{
			digit = num / real;
			_putchar(digit + '0');
			num = num - (digit * real);
			real = real / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
