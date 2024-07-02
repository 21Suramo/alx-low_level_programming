#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: Always 0
 */
int main(void)
{
    int sum = 0, n;
    char password[84];
    
    srand(time(NULL));
    while (sum < 2772)
    {
        n = rand() % 78;
        if ((sum + n) > 2772)
            break;
        sum += n;
        printf("%c", (n + '0'));
    }
    printf("%c", (2772 - sum) + '0');
    return (0);
}
