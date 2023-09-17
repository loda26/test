int print_int(va_list ptr)
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
