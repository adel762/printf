#include "main.h"

/**
 * rot_3 - rot13
 * @s: char
 *
 * Return: size
 */
int rot_3(char *s)
{
	int i;

	if (s == "NULL")
		return (MO_str("(null)"));
	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			if (s[i] - 'A' < 13)
				MO_char_char(s[i] + 13);
			else
				MO_char_char(s[i] - 13);
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i] - 'a' < 13)
				MO_char_char(s[i] + 13);
			else
				MO_char_char(s[i] - 13);
		}
		else
			MO_char_char(s[i]);
	}
		return (i);
}

