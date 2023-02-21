#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int c;
	int r;
for (c = 0; c <= 23; c++)
{
_putchar(c);
_putchar(58);
for (r = 0; r <= 59; r++)
{
_putchar(r);
}
}
}

