#include "main.h"

/**
 * MO_mod - print mod sige
 * @c: char
 *
 * Return: 0 or 1
 */
int MO_mod(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * MO_char_char - print char
 * @c: char1
 *
 * Return: char
 */
int MO_char_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * MO_str - print string
 * @s: string
 *
 * Return: string
 */
int MO_str(char *s)
{
	int i = 0;

	if (!s)
	{
		return (MO_str("(null)"));
	}
	while (s[i])
	{
		MO_char_char(s[i]);
		i++;
	}
	return (i);
}

/**
 * MO_help - the function
 * @d: int1
 * @a: int2
 * @x: int2
 *
 * Return: inteeger
 */

int MO_help(int d, int a, int x)
{
	int i = 0;
	char c = 48;

	while (d)
	{
		if (x == 0)
		{
			x += a / d;
		}
		if (x > 0)
		{
			c += (int) ((a / d) % 10);
			write(1, &c, 1);
			i++;
			c = 48;
		}
		if (d == 1)
			break;
		d /= 10;
	}
	if (x == 0 && a == 0)
	{
		write(1, '0', 1);
		i++;
	}
	return (i);
	
}

/**
 * MO_int - print inteeger
 * @list: input
 *
 * Return:inteeger
 */
int MO_int(va_list **list)
{
	int a = va_arg(**list, int);
	char c = 48;
	int x = 0, i = 0, d = 1e9;

	if (a >= INT_MIN && a <= INT_MAX)
	{
		if (a >= 0)
			i += MO_help(d, a, x);
		else
		{
			i++;
			write(1, "-", 1);
			while (d)
			{
				if (x == 0)
					x -= (a / d);
				if (x > 0)
				{
					c -= (int) ((a / d) % 10);
					write(1, &c, 1);
					i++;
					c = 48;
				}
				if (d == 1)
					break;
				d /= 10;
			}
		}
	}
	return (i);
}
