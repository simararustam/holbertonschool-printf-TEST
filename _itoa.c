#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 *_itoa - change integer to string
 *@value: given integer
 *Return: size of returned integer
 */
int _itoa(int value)
{
	char *str;
	int size = 0, i, j, n, temp;

	if (value < 0)
	{
		putchar('-');
		n = -value;
		size++;
	}
	/* else if (value == 0)
	 	size++; */
	else
		n = value;

	temp = n;
	do {
		n /= 10;
		size++;
	} while (n > 0);
	
	str = malloc(size + 1);

	/*Reset n to its original value for conversion to string */
	n = temp;
	i = 0;
	do {
		str[i++] = (n % 10) + '0';
		n /= 10;
	} while (n != 0);

	for (j = size - 1; j >= 0; j--)
	{
		putchar(str[j]);
	}

	/*free(str);*/
	return (size);
}
