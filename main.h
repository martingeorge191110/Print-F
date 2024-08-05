#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct funcType - to determine specifier and it's function
 * @t: specifier type
 * @f: pointer to function
 */

typedef struct funcType
{
	char t;
	int (*f)(va_list);
} func_type;

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(va_list);
int print_char(va_list);
int print_percent(va_list);
int print_digit(va_list ptr);
int print_binary(va_list);
int print_hexdecimal(va_list);
int print_HEXADECIMAL(va_list ptr);
int convert_to_char(int digit);
int convert_to_CHAR(int digit);
int print_unsigned(va_list);
int print_ocatal(va_list);
int print_pointer(va_list ptr);
int print_hex_ptr(unsigned long int temp);
int convert_to_char_ptr(int digit);
int print_rev(va_list ptr);


#endif
