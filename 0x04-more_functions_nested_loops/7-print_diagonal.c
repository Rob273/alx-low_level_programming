#include "main.h"
/**
 * print_diagonal - prints /
 * @n: no of times / to be printed
 * Retur: 0
 */

void print_diagonal(int n)
{
int r,s;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (r = 0; r < n; r++)
{
for (s = 0; s < r; s++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
