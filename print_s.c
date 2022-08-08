#include "main.h"

/**
 * print_s - checks a string format and counts the letters in it
 * @s: the string variable
 *
 * Return: number of characters
 */
int print_s(char *s)
{
	int count, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		count += _putchar(s[i]);
	}
	return (count);
}
