#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1, on error -1
 */
int _putchar(char c);

/**
 * Print_string - prints a string
 * @str: string to print
 * Return: number of characters printed
 */
int Print_string(char *str);

/**
 * Print_number - prints an integer
 * @n: integer to print
 * Return: number of characters printed
 */
int Print_number(int n);

#endif /* MAIN_H */
