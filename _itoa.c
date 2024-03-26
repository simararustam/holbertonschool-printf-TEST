#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_itoa - change integer to string
 *@value: given integer
 *Return: size of returned integer
 */
int _itoa(int value)
{
	char *str;
	int size = 0, i = 0, j, n, temp, is_negative = 0, k = 0;

   	 if (value < 0) 
   	 {
		 _putchar('-');
		 n = -value;
		 size++;
		 is_negative = 1;
    	} 
    	else if (value == 0) 
  		size++;
    	else 
        	n = value;

    	temp = n;
    	do {
        	n /= 10;
        	size++;
    	} while (n);
    	str = malloc(size);
	if (str == NULL)
		exit(77);
	if (is_negative)
	{
		if (value == INT_MIN)
			value += 1, k = 1;
		size++;
		value *= -1;
	}	
    	/* Reset n to its original value for conversion to string */
    	n = temp;
    	i = 0;
    	do {
        	str[i++] = (n % 10) + '0';
        	n /= 10;
    	} while (n);

    	for (j = size - 1; j >= 0; j--) {
        	_putchar(str[j]);
    	}

	if (k)
		str[size - 1] += 1;
	if (is_negative)
		str[0] = '-';
    	free(str);
    	return (size);
}
