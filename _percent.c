#include "main.h"
    	/*Part of printting '%'*/
	if (format[i] == '%' && format[i + 1] == '%')
	{
		/*write(1, "%", 1);*/
		_putchar('%');
		i++;
	}

	else if (format[0] == '%'  && format[1] == '\0')
	{
		return (-1);
	}

	else if (format[i] == '%'  && format[i + 1] != '%')
	{
		_putchar(format[i]);
	}
