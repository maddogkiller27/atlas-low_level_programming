#include "main.h"

/**
 * _isalpha - checks is character is alphabetic
 * @c: the character being checked
 *
 * Return: 1 if character is letter, 0 if it is not
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
