#include "main.h"
/**
 * puts_half - prints the last half of a string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
int r;
int len = 0;
int i = 0;

while (str[i++])
	len++;
if ((len % 2) == 0)
r = len / 2;
else
r = (len + 1) / 2;

for (i = r; i < len; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}

