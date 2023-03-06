#include "main.h"
/**
 * _strspn - gets the length of string
 * @s: string
 * @accept: string2
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
int c, r;

for (c = 0; accept[c] == s[c]; c++)
{
	r++;
}
return (r);
}
