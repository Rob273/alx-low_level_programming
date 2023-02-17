#include <stdio.h>
/**
 * main - lower abc...
 * Return: 0
 */
int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	if (alpha != 'e' && alpha != 'q')
	putchar(alpha);
	}

putchar(alpha);

putchar('\n');

return (0);
}

