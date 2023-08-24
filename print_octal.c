#include "main.h"

/**
 * print_octal - Print octal
 * @list: num
 *
 * Return: l num
 **/
int print_octal(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 8);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
