int print_binary(va_list list) //print binary function
{
    int num = va_arg(list, unsigned int);
    int array[32];
    int n;
    int counter = 0;
    if (num  == 0)
    {
        _putchar('0');
        return (counter);
    }
    for (; num > 0;)
    {
        array[counter++] = num % 2;
        num /= 2;
    }
    for (n = counter - 1; n >= 0; n--)
    {
        _putchar(array[n] + '0');
    }
    return (counter);
}
