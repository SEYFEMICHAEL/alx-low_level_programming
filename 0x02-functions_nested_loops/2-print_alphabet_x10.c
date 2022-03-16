#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char c = 'a';
int n = 0;

while (n < 10)
{
for (c; c <= 'z'; c++)
{
_putchar(c);
}

n++;
_putchar('\n');
}

}
