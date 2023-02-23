#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number
 * Return: 0
 */
int main(void)
{
long x, maxf;
long n = 612852475143;
double square = sqrt(n);

for (x = 1; x <= square; x++)
{
if (n % x == 0)
{
maxf = n / x;
}
}
printf("%ld\n", maxf);
return (0);
}
