#include "main.h"

/**
 * printf_char - prints a char
 * @val: argument
 * Return: 1 if successful
 */

int printf_char(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (1);
}
