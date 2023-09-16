#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Leo\n");
	_printf("%c\n", 'v');
	_printf("%s\n", "String");
	_printf("%%\n");
	_printf("no = %i\n", 10);
	_printf("no = %d\n", 100);
}
