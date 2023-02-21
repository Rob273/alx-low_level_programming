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
_putchar(r);
return (r);

}
