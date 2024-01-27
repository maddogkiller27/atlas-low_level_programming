#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: length of line
 *
 * Return: 0
 */

void print_diagonal(int n)
{
int length;
int space;

if (n > 0)
{
for (length = 0; length < n; length++)
{
for (space = 0; space < length; space++)
_putchar(' ');
_putchar(92);
if (length == n - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
