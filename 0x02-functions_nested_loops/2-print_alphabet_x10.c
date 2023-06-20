#include "main.h"
/**
 * print_alphabet_x10 - Print alphabets x10
 * Return: void
 */

void print_alphabet_x10(void)
{

char letter;
int r;
r = 0;
while (r < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
r++;
}

}
