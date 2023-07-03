#include "main.h"
/**
 **_memset - That fills memory with a constant byte
 *@s: The memory area to be filled
 *@b: The character to copy
 *@n: The number of times to copy b
 *Return: The pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int r;

for (r = 0; r < n; r++)
{
s[r] = b;
}

return (s);
}
