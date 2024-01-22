#include <stdio.h>

/*
 * main - prints numbers 1-9 but differently
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numbr;

for (numbr = 0; numbr < 10; numbr++)
putchar((num % 10) + '0');

putchar('\n');

return (0);
}
