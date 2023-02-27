#include "main.h"
/**
 * puts2 - prints everyother character of a string
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
int r;

for (r = 0; str[r] != '\0'; r++)
{
if ((r % 2) == 0)
{
_putchar(str[r]);
}
}

_putchar('\n');
}
