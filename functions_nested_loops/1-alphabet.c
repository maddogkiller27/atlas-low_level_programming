#include <main.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

putchar('\n');
}
