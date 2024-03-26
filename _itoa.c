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
		_putchar('-');
		n = -value;
		size++;
	}
	else
		n = value;
	temp = n;
	do {
		temp /= 10;
		size++;
	} while (temp);
	
	str = malloc(size + 1);

	i = 0;
	do {
		str[i++] = '0' + (n % 10);
		n /= 10;
	} while (n > 0);
	str[i] = '\0';

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	free(str);
	return (size);
}