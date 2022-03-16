#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char c;
int n;

n = 1;
while (n <= 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}

n++;
_putchar('\n');
}

}
