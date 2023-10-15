#include "main.h"

/**
 * _printf - a function that produces output
 *
 * @format: first input
 * @...: num of args
 *
 * Return: counter
*/
int _printf(const char *format, ...)
{
	int i = 0, counter = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			counter++;
		}
		else
		{
			i++;
			while (format[i] == ' ')
				i++;
			if (format[i] == '\0')
				break;
			counter += op(format[i], &list);
		}
		i++;
	}
	va_end(list);
	return (counter);
}

