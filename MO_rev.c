#include "main.h"

/**
 * MO_rev - function print
 * @s: char
 *
 * Return: number
 */
int MO_rev(char *s)
{
	int i = 0, counter = 0;

	if (!s)
		return (MO_str("(null)"));
	while (s[i] != '\0')
		i++;
	while (--i >= 0)
	{
		write(1, &s[i], 1);
		counter++;
	}
	return (counter);
}
