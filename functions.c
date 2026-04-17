#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: Character to print
 * * Return: 1 on success
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * Print_String - Prints a string
 * @str: String to print
 * * Return: Number of characters printed
 */
int Print_String(char *str)
{
    int count = 0;
    int i;

    if (!str)
        str = "(null)";

    for (i = 0; str[i] != '\0';i++ )
    {
	    count += _putchar(str[i]);
    }

    return (count);
}

/**
 * Print_number - Prints an integer
 * @n: Integer to print
 * * Return: Number of characters printed
 */
int Print_number(int n)
{
    int count = 0;
    unsigned int num;

    if (n < 0)
    {
        count += _putchar('-');
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10)
    {
        count += Print_number(num / 10);
    }

    count += _putchar((num % 10) + '0');

    return (count);
}
