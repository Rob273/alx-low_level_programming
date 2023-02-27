#include "main.h"
/**
 * puts2 - prints everyother character of a string
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
int r;

for (i = 0; str[i] != '\0'; i++)
{
	if (i % 2 == 0)
_putchar(*str);
}

_putchar('\n');
}
