/*
 * File: _printf.c
 * Auth: Kgotso Matjato
 * Ejiofor Obieze
 */

#include "main.h"

/**
 * _printf - Prints out any type of formatted string
 * @format: String character
 *
 * Return: Characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list v_list;

	va_start(v_list, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count = count + _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					/*prints the character from the va_args*/
					count = count + _putchar(va_arg(v_list, int));
					break;
				case 's':
					/* print_s is responsible for iterating through
					 * the string untill it reaches a '\0'
					and adds it to the count */
					count = count + print_s(va_arg(v_list, char *));
					break;
				case '%':
					/*prints the % if its in the printf*/
					count = count + _putchar('%');
					break;
				case 'd':
					count = count + print_d(va_arg(v_list, int));
					break;
				case 'i':
					count = count + print_d(va_arg(v_list, int));
				default:
					break;
			}
			i += 2;
		}
	}
	return (count);
}
