#include "main.h"
/**
 * print_last_digit - prints last digit
 * @c: number
 * Return: 0
 */
int print_last_digit(int c)
{
	int r;

	r = c % 10;
	if (r < 0)
	{
	r = r * -1
	}
_putchar(r + '0');
return (r);

}
