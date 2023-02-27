#include "main.h"
/**
 * print_rev - prits a string in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
int r = 0;

while (*s != 0)
{
s++;
r++;
}
s--;
r--;

while (r >= 0)
{
_putchar(*s);
s--;
r--;
}
_putchar('\n');
}
