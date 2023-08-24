#include "main.h"

/**
 * print_binary - print_binary
 * @list: no
 *
 * Return: num
 **/
int print_binary(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 2);

	size = print(p_buff);

	return (size);
}
