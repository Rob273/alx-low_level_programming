#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: an array
 * @n: intiger
 */
void reverse_array(int *a, int n)
{
int r, e, v;

e = 0;
v = n - 1;
for (r = 0; r < n / 2; r++)
{
e = a[v];
a[v] = a[r];
a[r] = e;
v--;
}
}
