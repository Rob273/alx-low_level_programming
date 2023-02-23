#include "main.h"
/**
 * print_square - prints square
 * @size: size of the square
 * Return: 0
 */

void print_square(int size)
{
int r, s;
if (size <= 0)
{
_putchar('\n');
}
else 
{
for (r = 0; r <= size; r++)

for (s = 0; s <= r; s++)
{
_putchar(35);
}
_putchar('\n');
}
}
