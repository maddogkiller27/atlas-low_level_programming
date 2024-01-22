#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabet in lowercase, excludes q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{if (letter != 'e' && letter != 'q')
putchar(letter);
}

putchar('\n');

return (0);
}
