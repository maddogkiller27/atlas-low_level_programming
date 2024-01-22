#include <stdio.h>

/**
 * main - prints all combos of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numbr;
for (numbr = 0; numbr <= 9; numbr++)
{
putchar((numbr % 10) + '0');
if (numbr == 9)
continue;

putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}
