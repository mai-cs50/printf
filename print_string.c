#include "main.h"

/**
 * print_string - Print string
 * @list: list
 *
 * Return: string
 */

int print_str(va_list list)
{
	/*ewfdsfdf dsfsdf*/

	char *p;
	int p_len;

	p = va_arg(list, char*);
	p_len = print((p != NULL) ? p : "(null)");

	return (p_len);
}
