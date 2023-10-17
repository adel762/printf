#include"main.h"

/**
 * MO_bin - deci to bin
 * @ll: input
 * Return: i
 */
int MO_bin(va_list **ll)
{
	unsigned int k = va_arg(**ll,unsigned int);
	int sum = 1, p = 0;
	char C[64];

	sum--;
	if (k == 0)
	{
		sum++;
		write(1, "0", 1);
		return (sum);
	}
	else
	{
		while (k > 0)
		{
			C[sum] = (k % 2) + '0';
			sum++;
			k /=2;
		}
		p = sum;
		p--;
		while (--sum >= 0)
			MO_char_char(char C);
				p++;
		return (p);
	}
}
