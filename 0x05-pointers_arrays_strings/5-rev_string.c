#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
    int len = 0, i = 0;
    char temp;

    while (s[len])
        len++;
    while (i < len / 2)
    {
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
        i++;
    }
}
