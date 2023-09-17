#include <stdarg.h>
#include <unistd.h>
int _putchar(char c) //_putchar function
{
        return (write(1, &c, 1));
}
int print_str(va_list list)//print string function
{
    char *str;
    int str_count = 0;
    str = va_arg(list, char *);
    while (*str)
    {
        write(1, str, 1);
        str_count++;
        str++;
    }
    return str_count;
}
int print_int(va_list list) //print integer function
{
    int j,num, digits, real;
    char array[100];
    
    num = va_arg(list, int);
    digits = 0;
    real = num;
    if (num < 0)
    {
        _putchar('-');
        num = -num;
    }
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
    return (write(1 , array, digits));
}
int print_binary(va_list ptr) //print binary function
{
    int arr[10];
    int counter = 0;
    int num = va_arg(ptr, int), n;
    while (num > 0)
    {
        arr[n] = num % 2;
        num = num / 2;
        n++;
    }
    for (n = counter - 1; n >= 0; n--)
    {
        _putchar(arr[n]);
    }
    return ();
}
int _printf(const char *format, ...)
{
	int char_count = 0, i;
	va_list list;

	va_start(list, format);

	if (format == NULL)
		return (-1);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			char_count += _putchar(format[i]);
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char_count += _putchar(va_arg(list, int));
			}
			else if (format[i] == 's')
			{
				char_count += print_str(list);
			}
			else if (format[i] == '%')
			{
				char_count += _putchar('%');
			}
			else if (format[i] == 'i' || format [i] == 'd')
			{
                char_count += print_int(list);
			}
			else if (format[i] == 'b')
			{
				char_count += print_binary(list);
			}
		}
	}
	va_end(list);
	return (char_count);
}

int main(void)
{
        // _printf("Leo\n");
        // _printf("%c\n", 'v');
        // _printf("%s\n", "String");
        // _printf("%%\n");
        // _printf("no = %i\n", 10);
        // _printf("no = %d\n", 625);
        _printf("the binary of 98 is %b", 98);
}
