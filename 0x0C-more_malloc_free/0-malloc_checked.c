#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: value of memory addres
 * Return: 98
 */

void *malloc_checked(unsigned int b)
{
void *memo = malloc(b);
if (memo == NULL)
{
exit(98);
}
return (memo);
}
