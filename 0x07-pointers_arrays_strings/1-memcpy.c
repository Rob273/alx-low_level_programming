#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: deatination 
 * @src: source
 * @n: intiger
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;
	for (r = 0; r < n; r++)
	{
	src[r] = dest[r];
	}
	return (dest);
}
