#include "main.h"

int print_int(va_list list)
{
    int j,num, digits, real;
    char array[100];

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
    return (write(1 , array, digits));
}
