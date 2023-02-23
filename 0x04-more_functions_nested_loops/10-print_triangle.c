#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
int c, r, s;
if (size <= 0)
{
_putchar('\n');
}
else 
{
for (c = 0; c < size; c++)
{
for (r = size - c; r > 1; r--)
{
_putchar(32);
}
for (s = 0; s <= c; s++)
{
_putchar(35);
}
_putchar('\n');
}
}
}

