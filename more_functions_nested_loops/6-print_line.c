#include "main.h"

/**
 * print_line - prints a line
 * @n: length of line
 *
 * Return: 0
 */

void print_line(int n)
{
int length;

if (n > 0)
{
for (length = 0; length < n; length++)
_putchar('_');
}
_putchar('\n');
}
