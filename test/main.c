#include <stdio.h>
#include "main.h"
int main(void)
{
	char c = 'a';
	
	_printf("%");
	_printf("Simara");
	_printf("simar%c", c);
	_printf("%s", "string");
	_printf("%%");
	_printf("%c%s%%", 'c', "str");
	printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	return (0);
}
