#include "main.h"

/**
 * print_integer - Print int
 * @list: num
 *
 * Return: numbers
 **/
int print_int(va_list list)
{
	/*cccc*/
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, int), 10);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
