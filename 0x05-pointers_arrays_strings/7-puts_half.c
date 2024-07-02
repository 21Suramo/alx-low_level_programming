#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
    int len = 0, i;

    while (str[len])
        len++;
    i = (len + 1) / 2;
    while (str[i])
        _putchar(str[i++]);
    _putchar('\n');
}
