#include <stdio.h>
#include "main.h"
/**
 *itoa - change integer to string
 *@value: given integer
 *Return: size of returned integer
 */
int itoa(int value)
{
	char str[1000000];
	int size = 0, i = 0, j;
	int n;

	if (value < 0)
	{
		_putchar('-');
		n = -value;
		size++;
	}
	else
		n = value;

	if (n == 0)
	{
		str[i++] = '0';
		size++;
	}
	else
	{
		while (n > 0)
		{
			str[i++] = '0' + (n % 10);
			n /= 10;
			size++;
		}
	}

	for (j = i; j >= 0; j--)
		_putchar(str[j]);

	return (size);
}
