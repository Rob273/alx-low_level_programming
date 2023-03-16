#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: str 1
 * @s2: str 2
 * @n: size of memory
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int r, s = n;
char *concat;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (r = 0; s1[r]; r++)
{
	s++;
}
concat = malloc(sizeof(char) * (s + 1));
if (concat == NULL)
{
	return (NULL);
}
s = 0;

for (r = 0; s1[r]; r++)
{
concat[s++] = s1[r];
}
for (r = 0; s2[r] && r < n; r++)
{
	concat[s++] = s2[r];
}
concat [s] = '\0';
return (concat);
}
