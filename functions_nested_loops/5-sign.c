#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: the number being printed
 *
 * Return: 1 if number greater than 0,
 *         0 if number is 0
 *         -1 if number less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
