#include "main.h"

/**
 * print_numbers - prints num 0-9
 *
 * Return: 0
 */

void print_numbers(void)
{
int number;

for (number = '0'; number <= '9'; number++)
_putchar(number);
_putchar('\n');
}
