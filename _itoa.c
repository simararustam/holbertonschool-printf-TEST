#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *itoa - change integer to string
 *@value: given integer
 *Return: size of returned integer
 */
int _itoa(int value)
{
	char *str;
	int size = 0, i = 0, j, n, temp;

	if (value < 0)
	{
		n = -value;
		size++;
	}
	else
		n = value;
	do {
		temp /= 10;
		size++;
	} while (temp != 0);
	str = (char*)malloc((size + 1) * sizeof(char));
	
	i = 0;
	if (value < 0)
		str[i++] = '-';
	do {
		str[i++] = '0' + (n % 10);
		n /= 10;
	} while (n != 0);

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}

	return (size);
}
