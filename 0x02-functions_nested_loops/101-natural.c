#include <stdio.h>
/**
 * main - all natural num below 1024
 * Return: 0
 */
int main(void)
{
int i, sum = 0;
for (i = ; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}
printf("%d\n", sum);
return (0);
}
