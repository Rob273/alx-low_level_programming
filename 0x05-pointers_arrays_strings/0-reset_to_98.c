#include "main.h"
/**
 * reset_to_98 - updates the value of the variable to 98
 * @n: pointer
 * Return: 0
 */
void reset_to_98(int *n)
{
int n = 402;
int *p = &n;

_putchar(n);
*p = 98;
_putchar(n);

}
