#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');

return (0);
}
