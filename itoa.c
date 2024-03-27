#include "main.h"

/**
 * itoa - Convert a long integer to its ASCII representation in a given base.
 * @num: The number to convert.
 * @base: The base of the number system to convert to.
 *
 * Return: A pointer to the converted string.
 */
char *itoa(long int num, int base)
{
    static char *array = "0123456789abcdef";
    static char buffer[65];
    char sign = 0;
    char *ptr;
    unsigned long n = (num < 0 && base == 10) ? -num : num;

    ptr = &buffer[sizeof(buffer) - 1];
    *ptr = '\0';

    do {
        *--ptr = array[n % base];
        n /= base;
    } while (n != 0);

    if (num < 0 && base == 10)
        *--ptr = '-';

    if (num == 0)
        *--ptr = '0';

    return ptr;
}

