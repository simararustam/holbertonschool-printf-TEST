#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 *_itoa - change integer to string
 *@value: given integer
 *Return: size of returned integer
 */
int _itoa(int num)
{
    int i = 0, j, temp, len = 0;
    int isNegative = 0;
    char *str;

    if (num < 0) {
        isNegative = 1;
        num = -num;
        len++;
    }

	temp = num;
	do {
		num /= 10;
		len++;
	} while (num > 0);
	str = malloc(len);

	num = temp;
    do {
        str[i++] = num % 10 + '0';
        num /= 10;
    } while (num > 0);
    
    if (isNegative)
        str[i++] = '-';
    str[i] = '\0';

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	len = 0;
	len = _puts(str);

	return (len);
}
