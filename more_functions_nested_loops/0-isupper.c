#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase letter
 * @c: letter being checked
 *
 * Return: 1 if upper 0 if lower
 */

int _isupper(int c)
{
  if (c >='A' && c <='Z')
  return 1;

  else
    return 0;
}
