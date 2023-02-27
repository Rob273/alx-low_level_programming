#include "main.h"
/**
 *_strcpy - copies a string
 *@dest: a buffer
 *@src: a pointer
 *Return: 0
 */

char *_strcpy(char *dest, const char *src)
{
int index = 0;

while (src[index])
{
dest[index] = src[index];
index++;
}

return (dest);
}
