#include "main.h"
/**
 * puts_half - prints the last half of a string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
int r;

for (r = r / 2 ; str[r] != '\0'; r++)
{
_putchar(str[r]);
}

_putchar('\n');
}

