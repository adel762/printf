#include "main.h"

/**
 * op - the function that choose
 * @c: char
 * @list: input
 *
 * Return: 0 or 1
 */

int op(char c, va_list *list)
{
	int counter = 0;

	if (c == '%')
		counter += MO_mod(c);
	else if (c == 'c')
		counter += MO_char_char(va_arg(*list, int));
	else if (c == 's')
		counter += MO_str(va_arg(*list, char *));
	else if (c == 'i' || c == 'd')
		counter += MO_int(&list);
	else if (c == 'R')
		counter += rot_3(va_arg(*list, char *));
<<<<<<< HEAD
	else if (c = b')
		counter += MO_bin(va_list **ll);
=======
	else if (c == 'b')
		counter += MO_bin(&list);
<<<<<<< HEAD
	else if (c == 'r')
		counter += MO_rev(va_arg(*list, char *));
=======
>>>>>>> e51b1783df6d779f419dccb4fb237363a0b68a56
>>>>>>> b4b63637ed98bf2c8a4188a714faa951cdded3af
	return (counter);
}
