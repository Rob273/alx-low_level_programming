#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of chars
 * @size: size of the array
 * @c: character
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

if (size == 0)

{
return (NULL);
}
array = malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
{
array[i] = c;
}
if (array == NULL)
{
return (NULL);
}
return (array);
}
