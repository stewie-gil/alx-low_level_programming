#include "main.h"
/**
 * print_diagonal -prints diagonally
 * @n: number of timeswe are printing that diagonal line
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
int i;
int c;
if (n == 0)
{
_putchar('\n');
}
else
{
for (c = 0; c < n; c++)
{
for (i = 0; i < c; i++)
{
_putchar(' ');
}
_putchar (92);
_putchar ('\n');
}
}
}
