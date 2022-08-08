#include "main.h"

/**
 * print_d - handles and prints decimal numbers
 * @num: the number variable
 *
 * Return: the number
 */
print_d(int num)
{
	int count = 0;

	/*checks for negative values*/
	if (num < 0)
	{
		count += _putchar('-');
		num = num * -1;
	}

	/*removes the last digit from a number*/
	if (num / 10)
	{
		count += print_d(num / 10);
	}

	/*gets last digit of a number and makes it a character*/
	count += _putchar(num % 10 + '0');

	return (count);
}
