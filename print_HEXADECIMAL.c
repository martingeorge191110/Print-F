#include "main.h"

/**
 * convert_to_CHAR - function to convert numbers (between 10 and 15)
 *						into upperCase characters
 * @digit: number to be converted
 *
 * Return: (len) character size
 */

int convert_to_CHAR(int digit)
{
	int i = 0, len;
	char *characters = "ABCDEF";
	int arr[6] = {10, 11, 12, 13, 14, 15};

	len = 0;
	while (arr[i])
	{
		if (digit == arr[i])
		{
			len += _putchar(characters[i]);
			break;
		}
		i++;
	}
	return (len);
}

/**
 * print_HEXADECIMAL - print a hexdecimal number
 * @ptr: list of arguments
 *
 * Return: (length)
 * otherwise - (1) if num = 0
 * otherwise - (0) if allocated memory failed
 */

int print_HEXADECIMAL(va_list ptr)
{
	unsigned int num, number;
	int *ram;
	int i, length = 0, counter, digit;

	num = va_arg(ptr, unsigned int);
	number = num;

	if (num == 0)
		return (_putchar('0'));

	i = 0;
	while (num > 0)
	{
		num = num / 16;
		i++;
	}

	ram = (int *)malloc(sizeof(int) * i);
	if (!ram)
		return (0);

	counter = i;
	 num = number;
	while (num > 0)
	{
		ram[--i] = num % 16;
		num /= 16;
	}

	while (i < counter)
	{
		digit = ram[i++];
		length += (digit >= 10) ? convert_to_CHAR(digit) : _putchar(digit + '0');
	}

	free(ram);
	return (length);
}
