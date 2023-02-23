#include "main.h"
/**
 * more_numbers - ten times 0-9
 * Return: 0
 */

void more_numbers(void)
{
int c;
int r;
int s;

for (r = 0; r < 10; r++)

{

for (c = 48; c <= 57; c++)
{
	for (s = "LF"; s <= "SO"; s++)
_putchar(c);
	_putchar(s);
_putchar('\n');
}
}

}
