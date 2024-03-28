#include "main.h"

/**
 * print_number - This is decimal
 * @r: count of numbers
 * @s: number string
 * Return: 0 Successful
 */
int print_number(unsigned int r, int s)
{
	int mod = 0, c = 0;
	unsigned int n;
	char number[11];

	if (s < 0)
	{
		_putchar('-');
		r++;
		n = -1 * s;
	}
	else
		n = s;
	if (n == 0)
	{
		_putchar(48);
		return (r + 1);
	}
	while (n > 0)
	{
		mod = n % 10;
		number[c] = mod + 48;
		n = n / 10;
		c++;
	}
	r = r + c;
	c = c - 1;
	while (c >= 0)
	{
		_putchar(number[c]);
		c--;
	}
	return (r);
}
