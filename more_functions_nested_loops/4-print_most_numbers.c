#include "main.h"

/**
 * print_most_numbers - prints most numbers
 *
 * Return: 0
 */

void print_most_numbers(void)
{
int number;

for (number = '0'; number <= '9'; number++)
{
if (number != '2' && number != '4')
_putchar(number);
}
_putchar('\n');
}
