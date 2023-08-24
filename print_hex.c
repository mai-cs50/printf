#include "main.h"

/**
 * print_hex - print_hex
 * @list: int
 *
 * Return: num
 **/
int print_hex(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 16);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
