#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *itoa - change integer to string
 *@value: given integer
 *Return: size of returned integer
 */
char *_itoa(int value)
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

   	 for (j = 0; j < i / 2; j++) 
	 {
        	char temp = str[j];
        	str[j] = str[i - j - 1];
        	str[i - j - 1] = temp;
	 }

	return (str);
}
