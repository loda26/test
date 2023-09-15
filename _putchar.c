#include "main.h"

/**
 * _puts - prints a string
 * @str: input string
 * Return: void
*/
int _puts(char *str)
{
	char *s = str;

	while (*str)
		_putchar(*str++);
	return (str - s);
}

/**
 * _putchar - prints a char
 * @c: input char
 * Return: 1 on success, -1 on error
*/
int _putchar(int c)

