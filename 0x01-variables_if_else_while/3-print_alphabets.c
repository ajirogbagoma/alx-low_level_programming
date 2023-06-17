#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    char e;
    char h;

    e = 'a';
    h = 'A';
    while (e <= 'z')
    {
	    while (h <= 'Z')
	    {
		    putchar(h);
		    h++
            }
	    putchar(e);
	    e++;
    }
    putchar('\n');

    return (0);
}

