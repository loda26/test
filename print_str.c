#include "main.h"
int print_str(va_list list)
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
