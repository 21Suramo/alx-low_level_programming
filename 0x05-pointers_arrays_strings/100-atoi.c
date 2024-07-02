#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
    int result = 0, sign = 1, i = 0;

    while (s[i] && (s[i] < '0' || s[i] > '9'))
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }
    while (s[i] && (s[i] >= '0' && s[i] <= '9'))
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }
    return (result * sign);
}
