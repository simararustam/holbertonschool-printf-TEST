#include <stdio.h>
#include "main.h"
int main(void)
{
	char c = 'a';

	_printf("Simara");
	_printf("simar%c", c);
	_printf("%s", "string");
	_printf("%%");
	return (0);
}
