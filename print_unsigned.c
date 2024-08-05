#include "main.h"

/**
 * print_unsigned - function to print unsigned number
 * @ptr: list of arguments
 *
 * Return: (length)
 * otherwise - (1)
 */

int print_unsigned(va_list ptr)
{
	unsigned int number = va_arg(ptr, unsigned int);
	unsigned int temp = number;
	unsigned int exp = 1;
	int length = 0, digit;

	if (number == 0)
		return (_putchar('0'));

	while (temp >= 10)
	{
		exp = exp * 10;
		temp = temp / 10;
	}

	while (exp > 0)
	{
		digit = number / exp;
		length += _putchar(digit + '0');
		number -= digit * exp;
		exp = exp / 10;
	}

	return (length);
}
