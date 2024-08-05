#include "main.h"

/**
 * print_digit - function to print digit or integer
 * @ptr: list of argumants
 *
 * Return: (length) length of the number elements
 */

int print_digit(va_list ptr)
{
	int input = va_arg(ptr, int);
	unsigned int number;
	int digit, exp = 1, length = 0;

	number = input;
	if (input < 0)
	{
		length += _putchar('-');
		number = -1 * input;
		input = number;
	}
	while (number >= 10)
	{
		exp = exp * 10;
		number = number / 10;
	}
		number = input;
	while (exp > 0)
	{
		digit = number / exp;
		length += _putchar(digit + '0');
		exp = exp / 10;
		number = number - (digit * exp * 10);
	}

	return (length);
}
