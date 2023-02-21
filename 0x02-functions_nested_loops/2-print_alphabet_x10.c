#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)

{
char c;
int r;
for (r = 0; r < 10; r++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
