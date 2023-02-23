#include "main.h"
/**
 * print_diagonal - prints /
 * @n: no of times / to be printed
 * Retur: 0
 */

void print_diagonal(int n)
{
int r;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (r = 0; r < n; r++)
{
_putchar(92);
}
}
}
