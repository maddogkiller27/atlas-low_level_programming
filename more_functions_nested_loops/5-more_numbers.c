#include "main.h"
/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: idk, im not feeling so smart anymore
 */

void more_numbers(void)
{
int loop;
int number;

{
for (loop = 0; loop <= 9; loop++)
     
{
for (number = 0; number <= 14; number++)
{
if (number > 9)
_putchar((number / 10) + '0');
_putchar((number % 10) + '0');
}
}
_putchar('\n');
}
}
