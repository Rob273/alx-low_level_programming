#include "main.h"
/**
 * _strspn - gets the length of string
 * @s: string
 * @accept: string2
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int c, r;
r = 0;

for (c = 0; s[c] >= '\0'; c++)
{
	if (accept[c] == s[c])
	{
	r++;
	}
}
return (r);
}
