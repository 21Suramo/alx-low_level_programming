#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer pointed to by dest
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    char *ptr = dest;

    while (*src)
        *ptr++ = *src++;
    *ptr = '\0';
    return (dest);
}
