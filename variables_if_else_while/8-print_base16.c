#include <stdio.h>

/**
 * main - prints base 16 #'s in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numbr;
char letter;

for (numbr = 0; numbr < 10; numbr++)
putchar((numbr % 10) + '0');

for (letter = 'a'; letter <= 'f'; letter++)

putchar('\n');

return (0);
}
