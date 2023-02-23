#include "main.h"
/**
 * more_numbers - ten times 0-9
 * Return: 0
 */

void more_numbers(void)
{
int c;
int r;
for (r = 0; r < 10; r++)
{
for (c = 0; c <= 14; c++)
{
if (c > 9)
{
_putchar((c / 10) + '0');
}
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
