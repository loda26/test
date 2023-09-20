#include "main.h"
/**
*print_int - print integer numbers
*@type: type of conversion specifiers
*Description: Handle the following conversion specifiers: d, i
*Return: value
*/
int print_integer(va_list ptr)
{
int a[50], n, i;
type = va_ar(ptr, int);
int count = 0;
if (type > 0)
{
if (type % 10 == 0)
{
count++;
}
type /= 10;
}
for (n = count - 1; n >= 0; n--)
{
_putchar(a[n]);
}
return (count);
}
